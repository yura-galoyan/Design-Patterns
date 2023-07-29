#include "Window.hpp"
#include "Builder.hpp"

#include "GLFWBuilder.hpp"

#include "WindowHandler.hpp"



int main(){

    GLFWBuilder glfw_builder;
    WindowHandler handler;
    std::vector<std::unique_ptr<Window>> windows;



    handler.createWindow(glfw_builder);
    windows.push_back(glfw_builder.getWindow());
    



    for(auto & window : windows){
        window->run();
    }
}