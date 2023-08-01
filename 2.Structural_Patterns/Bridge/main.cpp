#include "Window.hpp"
#include "WindowImp.hpp"
#include "GLFWWindow.hpp"
#include "SFMLWindow.hpp"
#include "GLFWWindowImp.hpp"
#include "SFMLWindowImp.hpp"

void act(Window& window){
    window.run();
}




int main(){
    std::unique_ptr<Window> win = std::make_unique<GLFWWindow>(std::make_unique<SFMLWindowImp>());
    act(*win);
}