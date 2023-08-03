#ifndef MEDIATOR_HPP
#define MEDIATOR_HPP

#include <iostream>

class Component;

class Mediator
{
public:
    virtual void notify(Component* component, std::string name) = 0;
};


#endif //MEDIATOR_HPP