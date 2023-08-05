#ifndef VISITOR_SECOND_HPP
#define VISITOR_SECOND_HPP

#include "ElementA.hpp"
#include "ElementB.hpp"

#include "Visitor.hpp"


class VisitorSecond : public Visitor
{
public:
    virtual void visitElementA(ElementA& elem) override{
        std::cout<<elem.getName() << " second" <<std::endl;
    }
    
    virtual void visitElementB(ElementB& elem) override{
        std::cout<<elem.getName() << " second" <<std::endl;
    }
};

#endif //VISITOR_SECOND_HPP