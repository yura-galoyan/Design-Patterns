#pragma once
#include "AbstractFactory.hpp"
#include "TextButton.hpp"


class TextFactory : public AbstractFactory
{
public:
    virtual std::unique_ptr<AbstractButton> createButton() const override{
        return std::make_unique<TextButton>();
    }
};
