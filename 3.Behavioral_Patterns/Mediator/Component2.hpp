#ifndef COMPONENT_2_HPP
#define COMPONENT_2_HPP

#include "Component.hpp"

class Component2 : public Component
{
public:
    void do2(){
        mediator->notify(this,"2");
    }
};


#endif //COMPONENT_2_HPP

