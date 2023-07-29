#pragma once
#include "AbstractButton.hpp"


class SFMLButton : public AbstractButton
{
public:
    void press() override {
        std::cout<<"pressing sfml button"<<std::endl;
        isPressed = true;
    }
    virtual std::unique_ptr<AbstractButton> clone() const override{
        return std::make_unique<SFMLButton>(*this);
    }
};
