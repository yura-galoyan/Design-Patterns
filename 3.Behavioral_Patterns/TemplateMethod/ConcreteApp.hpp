#ifndef CONCRETE_APP
#define CONCRETE_APP

#include "AbstractApp.hpp"

#include <iostream>

class ConcreteApp : public AbstractApp
{
protected:
    virtual void doOp1() override{
        std::cout<<"ConcreteApp op1"<<std::endl;
    }

    virtual void op2() override{
        std::cout<<"ConcreteApp op2" <<std::endl;
    }
};

#endif //CONCRETE_APP