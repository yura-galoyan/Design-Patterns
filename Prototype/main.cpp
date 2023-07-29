#include "Window.hpp"

#include "WinPrototypeFactory.hpp"

#include "GLFWButton.hpp"
#include "GLFWCheckbox.hpp"
#include "SFMLButton.hpp"
#include "SFMLCheckbox.hpp"

std::unique_ptr<Window> createWin(const WinPrototypeFactory& factory){

    std::unique_ptr<Window> win = std::make_unique<Window>();
    win->addButton(factory.makeButton());
    win->addCheckBox(factory.makeCheckBox());
    
    return win;
}

int main(){

    std::unique_ptr<Window> window = createWin(WinPrototypeFactory( std::make_unique<SFMLButton>(), std::make_unique<SFMLCheckBox>() ));



    window->run();

}