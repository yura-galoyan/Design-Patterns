#ifndef OBSERVER_HPP
#define OBSERVER_HPP

#include <string>

class Subject;

class Observer
{
public:
    virtual void update( Subject* subject) = 0;
};

#endif //OBSERVER_HPP