#ifndef VISITOR_HPP
#define VISITOR_HPP

class ElementA;
class ElementB;

#include <iostream>

class Visitor
{
public:
    virtual void visitElementA(ElementA& element) { }
    virtual void visitElementB(ElementB& element) { }
};

#endif //VISITOR_HPP