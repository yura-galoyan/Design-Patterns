#pragma once
#include "AbstractFactory.hpp"

#include "GlfwButton.hpp"


class GLFWFactory : public AbstractFactory
{
public:
    virtual std::unique_ptr<AbstractButton> createButton() const override{
        return std::make_unique<GLFWButton>();
    }
};
