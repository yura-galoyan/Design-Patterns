#pragma once
#include "AbstractButton.hpp"



class GLFWButton : public AbstractButton
{
public:
    void press() override {
        isPressed = true;
        std::cout<<"glfw AbstractButton is pressed"<<std::endl;
    };
    virtual std::unique_ptr<AbstractButton> clone() const override{
        return std::make_unique<GLFWButton>(*this);
    }
};