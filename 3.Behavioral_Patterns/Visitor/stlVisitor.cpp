
#include <variant>
#include <iostream>

template<class... Ts>
struct overloaded : Ts... { using Ts::operator()...; };
template<class... Ts>
overloaded(Ts...) -> overloaded<Ts...>;

int main(){
    std::variant<int,char> a;

    a = '4';


    std::visit(overloaded{
            [](int) { std::cout << "int" << std::endl; },
            [](char) { std::cout << "char" << std::endl; }
        }, a
    );
}