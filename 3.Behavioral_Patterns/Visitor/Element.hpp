#ifndef ELEMENT_HPP
#define ELEMENT_HPP

#include "Visitor.hpp"

#include <string>

class Element
{
public:
    virtual void accept(Visitor& visitor) = 0;
};
#endif //ELEMENT_HPP