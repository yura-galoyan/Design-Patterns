#pragma once
#include "GlfwButton.hpp"
#include "AbstractCreator.hpp"



class GLFWCreator : public AbstractCreator
{
public:
    std::unique_ptr<AbstractButton> create() const override{
        return std::make_unique<GLFWButton>();
    }
};
