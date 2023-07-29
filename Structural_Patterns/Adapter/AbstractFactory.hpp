#pragma once
#include "AbstractButton.hpp"

#include <memory>

class AbstractFactory
{
public:
    virtual std::unique_ptr<AbstractButton> createButton() const = 0;
};
