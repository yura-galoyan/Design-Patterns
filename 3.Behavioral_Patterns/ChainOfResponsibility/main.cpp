
#include "Button.hpp"
#include "ScrollBar.hpp"

int main(){
    std::string req = "scrollbar";

    std::unique_ptr<Button> button = std::make_unique<Button>();
    std::unique_ptr<ScrollBar > scrollBar = std::make_unique<ScrollBar>();
    button->setNext(scrollBar.get());
    button->handle(req);
    std::cout<<std::endl;
    button->handle("button"); 
}