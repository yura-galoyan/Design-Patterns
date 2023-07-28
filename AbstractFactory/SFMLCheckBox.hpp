#pragma once

#include "CheckBox.hpp"



class SFMLCheckBox : public CheckBox
{
public:
    virtual bool isChecked() const override{
        std::cout<<"SFML checkbox" <<std::endl;
        return true;
    }
};