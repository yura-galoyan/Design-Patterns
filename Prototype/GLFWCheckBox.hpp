#pragma once


#include "CheckBox.hpp"

class GLFWCheckBox : public CheckBox
{
public:
    virtual bool isChecked() const override {
        std::cout<<"GLFW checkbox"<<std::endl;
        return checked;
    }

    virtual std::unique_ptr<CheckBox> clone() const override{
        return std::make_unique<GLFWCheckBox>(*this);
    }
    
};
