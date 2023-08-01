#include "AbstractButton.hpp"

#include <vector>
#include <utility>

class Window
{
public:
    using ButtonVec = std::vector<std::unique_ptr<AbstractButton>>; 
    using CheckBoxVec = std::vector<std::unique_ptr<CheckBox>>; 

public:
    void addButton(std::unique_ptr<AbstractButton> button){
        buttons.push_back(std::move(button));
    }

    void addCheckBox(std::unique_ptr<CheckBox> box){
        checkBoxes.push_back(std::move(box));
    }
    void run(){
        for(auto& button : buttons){
            button->press();
        }

        for(auto& checkBoxe : checkBoxes){
            if(checkBoxe->isChecked()){
                std::cout<<"is checked" <<std::endl;
            };
        }
    }
private:
    ButtonVec buttons;
    CheckBoxVec checkBoxes;

};