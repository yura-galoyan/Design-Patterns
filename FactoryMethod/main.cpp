#include "SFMLCreator.hpp"
#include "GLFWCreator.hpp"
#include "Window.hpp"



int main(){
    GLFWCreator factory1;
    SFMLCreator factory2;

    Window window;

    window.addButton(factory2.create());

    window.run();


}