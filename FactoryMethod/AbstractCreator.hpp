#pragma once
#include "AbstractButton.hpp"

#include <memory>

class AbstractCreator
{
public:
    virtual std::unique_ptr<AbstractButton> create() const = 0;
};
