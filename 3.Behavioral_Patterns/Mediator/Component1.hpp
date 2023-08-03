#ifndef COMPONENT_1_HPP
#define COMPONENT_1_HPP

#include "Component.hpp"

class Component1 : public Component
{
public:
    void do1(){
        mediator->notify(this, "1");        
    }
};


#endif //COMPONENT_1_HPP