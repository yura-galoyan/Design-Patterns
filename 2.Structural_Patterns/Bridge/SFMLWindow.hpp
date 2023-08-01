#ifndef SFML_WINDOW_HPP
#define SFML_WINDOW_HPP

#include "Window.hpp"

class SFMLWindow : public Window
{
public:
    SFMLWindow(std::unique_ptr<WindowImp> impl)
        :Window(std::move(impl)){}

    virtual void run() override{
        std::cout<<"sfml abstr: ";
        imp->runWindow();
    }
};

#endif //SFML_WINDOW_HPP