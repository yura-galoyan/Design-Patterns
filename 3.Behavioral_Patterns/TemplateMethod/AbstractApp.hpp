#ifndef ABSTRACT_APP
#define ABSTRACT_APP


class AbstractApp
{
public:
    void templateMethode(){
        doOp1();
        op2();
    }
protected:
    virtual void doOp1() = 0;

    virtual void op2(){ }
};
#endif //ABSTRACT_APP