#pragma once

#include "Builder.hpp"

class WindowHandler
{
public:
    void createWindow(Builder& builder){
        builder.buildWindow();
        builder.buildButton();
    }

};