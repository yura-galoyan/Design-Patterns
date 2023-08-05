#ifndef ELEMENT_A_HPP
#define ELEMENT_A_HPP

#include "Element.hpp"

class ElementA : public Element
{
public:
    virtual void accept(Visitor& visitor) override{
        visitor.visitElementA(*this);
    };
    std::string getName(){
        return std::string{"A"};
    }


};

#endif //ELEMENT_A_HPP