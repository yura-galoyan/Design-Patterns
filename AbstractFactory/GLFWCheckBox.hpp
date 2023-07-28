#pragma once


#include "CheckBox.hpp"

class GLFWCheckBox : public CheckBox
{
public:
    virtual bool isChecked() const override {
        std::cout<<"GLFW checkbox"<<std::endl;
        return true;
    }
};
