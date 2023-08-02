#include <iostream>
#include <cstring>
#include <memory>
#include <map>

class Context;

class BooleanExp {
public:
  BooleanExp() = default;
  virtual ~BooleanExp() = default;
  virtual bool evaluate(Context&) = 0;
};

class VariableExp;

class Context {
public:
  Context() :m() {}
  bool lookup(const VariableExp* key) { return m.at(key); }
  void assign(VariableExp* key, bool value) { m[key] = value; }
private:
  std::map<const VariableExp*, bool> m;
};

class VariableExp : public BooleanExp {
public:
  VariableExp(const char* name_) :name(nullptr) {
    name = strdup(name_);
  }
  virtual ~VariableExp() = default;
  virtual bool evaluate(Context& aContext) {
    return aContext.lookup(this);
  }

  VariableExp(const VariableExp&) = delete;
  VariableExp& operator=(const VariableExp&) = delete;
private:
  char* name;
};

class AndExp : public BooleanExp {
public:
  AndExp(BooleanExp* op1, BooleanExp* op2)
    :operand1(nullptr), operand2(nullptr) {
    operand1 = op1;
    operand2 = op2;
  }
  virtual ~AndExp() = default;
  virtual bool evaluate(Context& aContext) {
    return operand1->evaluate(aContext) && operand2->evaluate(aContext);
  }

  AndExp(const AndExp&) = delete;
  AndExp& operator=(const AndExp&) = delete;
private:
  BooleanExp* operand1;
  BooleanExp* operand2;
};

int main() {
  std::unique_ptr<BooleanExp> expression;
  Context context;
  auto x = std::make_unique<VariableExp>("X");
  auto y = std::make_unique<VariableExp>("Y");
  expression = std::make_unique<AndExp>(x.get(), y.get());

  context.assign(x.get(), false);
  context.assign(y.get(), true);
  bool result = expression->evaluate(context);
  std::cout << result << '\n';

  context.assign(x.get(), true);
  context.assign(y.get(), true);
  result = expression->evaluate(context);
  std::cout << result << '\n';
}