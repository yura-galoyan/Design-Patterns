#ifndef GLFW_WINDOW_IMP_HPP
#define GLFW_WINDOW_IMP_HPP

#include "WindowImp.hpp"

class GLFWWindowImp : public WindowImp
{
public:
    virtual void runWindow() override{
        std::cout <<" glfw imp" <<std::endl;
    };
};

#endif //GLFW_WINDOW_IMP_HPP