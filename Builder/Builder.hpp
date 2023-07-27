#pragma once
#include "Window.hpp"

class Builder
{
public:
    virtual void buildButton(){};
    virtual void buildWindow(){};
    virtual std::unique_ptr<Window> getWindow(){ return nullptr; };
};
