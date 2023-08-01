#ifndef COMPONENT_HPP
#define COMPONENT_HPP

#include <memory>
#include <iostream>
#include <string>

class Component
{
public:
    virtual void draw() = 0;

protected:
    std::string name;
};

#endif //COMPONENT_HPP