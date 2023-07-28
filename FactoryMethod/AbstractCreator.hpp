#pragma once
#include "AbstractButton.hpp"
#include "Window.hpp"

#include <memory>
class AbstractCreator
{
public:
    std::unique_ptr<Window> createWindow(){
        std::unique_ptr<Window> win = std::make_unique<Window>();
        win->addButton(create());

        return win;
    }
    // factory method
    virtual std::unique_ptr<AbstractButton> create() const = 0;
};
