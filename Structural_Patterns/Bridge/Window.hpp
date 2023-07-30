#ifndef MY_WINDOW_HPP
#define MY_WINDOW_HPP

#include "WindowImp.hpp"

#include <memory>

class Window
{
protected:
    std::unique_ptr<WindowImp> imp;
public:
    Window(std::unique_ptr<WindowImp> imp_)
        :imp(std::move(imp_)){}
    virtual void run() = 0;
};
 
#endif //MY_WINDOW_HPP