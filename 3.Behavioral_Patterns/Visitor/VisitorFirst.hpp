#ifndef VISITOR_FIRST_HPP
#define VISITOR_FIRST_HPP

#include "Visitor.hpp"

#include "ElementA.hpp"
#include "ElementB.hpp"

class VisitorFirst : public Visitor
{
    virtual void visitElementA(ElementA& element) override{
        std::cout<<element.getName() << " first" << std::endl; 
    }   
    virtual void visitElementB(ElementB& element) override{
        std::cout<<element.getName() << " first" << std::endl; 
    }
};

#endif //VISITOR_FIRST_HPP