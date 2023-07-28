#include "SFMLCreator.hpp"
#include "GLFWCreator.hpp"
#include "Window.hpp"



int main(){
    std::unique_ptr<AbstractCreator> creator = std::make_unique<SFMLCreator>();

    std::unique_ptr<Window> window = creator->createWindow();

    window->run();


}