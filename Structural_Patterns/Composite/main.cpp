#include "Button.hpp"
#include "Window.hpp"



int main(){
    std::shared_ptr<Window> win1 = std::make_shared<Window>("window1");
    std::shared_ptr<Window> win2 = std::make_shared<Window>("window2");
   
    std::shared_ptr<Button> btn1 = std::make_shared<Button>("Button1");
    std::shared_ptr<Button> btn2 = std::make_shared<Button>("Button2");

    win1->add(btn1);
    win1->add(btn2);

    win2->add(win1);
    
    win2->draw();

}