#pragma once


#include <iostream>



class CheckBox
{
public:
    CheckBox() = default;
    CheckBox(const CheckBox& other){
        std::cout<<"copy constructor"<<std::endl;
        checked = other.checked;
    }
    virtual bool isChecked() const = 0 ;
    virtual std::unique_ptr<CheckBox> clone() const = 0;

protected:
    bool checked{true};
};
