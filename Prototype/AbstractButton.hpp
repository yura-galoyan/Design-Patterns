#pragma once

#include <iostream>

#include <memory>

class AbstractButton
{
public:
    AbstractButton() = default;
    AbstractButton(const AbstractButton& other){
        std::cout<<"copy constructor"<<std::endl;
        isPressed = other.isPressed;
    }
    virtual void press() = 0 ;
    virtual std::unique_ptr<AbstractButton> clone() const = 0;

protected:
    bool isPressed{false};
};
