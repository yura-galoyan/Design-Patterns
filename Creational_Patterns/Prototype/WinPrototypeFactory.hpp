#pragma once
#include "AbstractButton.hpp"
#include "CheckBox.hpp"



class WinPrototypeFactory
{
public:
    WinPrototypeFactory(std::unique_ptr<AbstractButton> button, std::unique_ptr<CheckBox> checkBox )
        :buttonPrototype(std::move(button)),checkBoxPrototype(std::move(checkBox))
    {

    }
    std::unique_ptr<AbstractButton> makeButton() const {
        return buttonPrototype->clone();
    }

    std::unique_ptr<CheckBox> makeCheckBox() const{
        return checkBoxPrototype->clone();
    }

private:
    std::unique_ptr<AbstractButton> buttonPrototype;
    std::unique_ptr<CheckBox> checkBoxPrototype;
};
