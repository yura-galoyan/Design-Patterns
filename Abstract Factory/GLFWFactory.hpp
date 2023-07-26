#pragma once
#include "GlfwButton.hpp"
#include "AbstractFactory.hpp"



class GLFWFactory : public AbstractFactory
{
public:
    std::unique_ptr<AbstractButton> createButton() const override{
        return std::make_unique<GLFWButton>();
    }
};
