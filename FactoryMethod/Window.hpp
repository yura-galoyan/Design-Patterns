#include "AbstractButton.hpp"

#include <vector>
#include <utility>

class Window
{
public:
    using ButtonVec = std::vector<std::unique_ptr<AbstractButton>>; 

public:
    void addButton(std::unique_ptr<AbstractButton> button){
        buttons.push_back(std::move(button));
    }
    void run(){
        for(auto& button : buttons){
            button->press();
        }
    }
private:
    ButtonVec buttons;

};