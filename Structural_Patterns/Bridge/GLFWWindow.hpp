#ifndef GLFW_WINDOW_HPP
#define GLFW_WINDOW_HPP

#include "Window.hpp"

class GLFWWindow : public Window
{
public:
    GLFWWindow(std::unique_ptr<WindowImp> impl)
        :Window(std::move(impl)){}

    virtual void run() override{
        std::cout<<"glfw abstr: ";
        imp->runWindow();
    }
};

#endif //GLFW_WINDOW_HPP