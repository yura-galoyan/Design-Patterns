#ifndef CONCRETE_MEDIATOR_HPP
#define CONCRETE_MEDIATOR_HPP

#include "Component1.hpp"
#include "Component2.hpp"

class ConcreteMediator : public Mediator
{
public:
    ConcreteMediator(Component1* c1, Component2* c2) : c1(c1), c2(c2)
    {
        c1->setMediator(this);
        c2->setMediator(this);
    }

    virtual void notify(Component* component, std::string name) override {
        if(name == "1"){
            std::cout << "component 1" << std::endl;
        }
        if(name == "2"){
            std::cout << "component 2" << std::endl;
        }
    }

private:
    Component1* c1;
    Component2* c2;

};


#endif //CONCRETE_MEDIATOR_HPP