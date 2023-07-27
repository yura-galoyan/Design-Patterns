#pragma once
#include "AbstractButton.hpp"



class GLFWButton : public AbstractButton
{
public:
    void press() override {
        std::cout<<"glfw AbstractButton is pressed"<<std::endl;
    };
};