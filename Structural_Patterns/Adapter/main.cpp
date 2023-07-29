#include "Window.hpp"

#include "GLFWFactory.hpp"
#include "TextFactory.hpp"
#include "AbstractFactory.hpp"

std::unique_ptr<Window> createWin(const AbstractFactory& factory){

    std::unique_ptr<Window> win = std::make_unique<Window>();
    win->addButton(factory.createButton());
    
    return win;
}

int main(){
    TextFactory factory;
    std::unique_ptr<Window> window = createWin(factory);
    window->run();
}