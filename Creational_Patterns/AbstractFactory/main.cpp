#include "SFMLFactory.hpp"
#include "GLFWFactory.hpp"
#include "Window.hpp"


std::unique_ptr<Window> createWin(const AbstractFactory& factory){

    std::unique_ptr<Window> win = std::make_unique<Window>();
    win->addButton(factory.createButton());
    win->addCheckBox(factory.createCheckBox());
    
    return win;
}

int main(){
    GLFWFactory factory1;
    SFMLFactory factory2;

    std::vector<std::unique_ptr<Window>> windows;

    windows.push_back(createWin(factory1));
    windows.push_back(createWin(factory2));

    for(auto & window : windows){
        window->run();
    }
}