#pragma once
#include "AbstractButton.hpp"
#include "CheckBox.hpp"

#include <memory>

class AbstractFactory
{
public:
    virtual std::unique_ptr<AbstractButton> createButton() const = 0;
    virtual std::unique_ptr<CheckBox> createCheckBox() const = 0;
};
