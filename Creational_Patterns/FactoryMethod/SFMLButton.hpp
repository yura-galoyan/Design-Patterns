#pragma once
#include "AbstractButton.hpp"


class SFMLButton : public AbstractButton
{
public:
    void press() override {
        std::cout<<"sfml AbstractButton is pressed"<<std::endl;
    }
};
