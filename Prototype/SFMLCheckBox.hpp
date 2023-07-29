#pragma once

#include "CheckBox.hpp"



class SFMLCheckBox : public CheckBox
{
public:
    virtual bool isChecked() const override{
        std::cout<<"is sfml checkbox checked?" <<std::endl;
        return checked;
    }

    virtual std::unique_ptr<CheckBox> clone() const override{
        return std::make_unique<SFMLCheckBox>(*this);
    }
};