#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include "Mediator.hpp"

class Component
{
public:
    virtual void setMediator(Mediator* mediator){
        this->mediator = mediator;
    }

protected:
    Mediator* mediator;
};

#endif //COMPONENT_HPP