#ifndef ELEMENT_B_HPP
#define ELEMENT_B_HPP

#include "Element.hpp"

class ElementB : public Element
{
public:
    virtual void accept(Visitor& visitor) override{
        visitor.visitElementB(*this);
    };

    std::string getName(){
        return std::string{"B"};
    }

};

#endif //ELEMENT_B_HPP