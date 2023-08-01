#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "Component.hpp"

class Button : public Component
{
public:
    Button(std::string name){
        this->name = name;
    }

    virtual void draw() override {
        std::cout<<"component name is: " << name <<std::endl;
    }
};

#endif //BUTTON_HPP