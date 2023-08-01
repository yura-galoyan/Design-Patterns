#pragma once
#include "AbstractFactory.hpp"

#include "GlfwButton.hpp"

#include "GLFWCheckBox.hpp"

class GLFWFactory : public AbstractFactory
{
public:
    virtual std::unique_ptr<AbstractButton> createButton() const override{
        return std::make_unique<GLFWButton>();
    }
    virtual std::unique_ptr<CheckBox> createCheckBox() const override{
       return std::make_unique<GLFWCheckBox>();
    };
};
