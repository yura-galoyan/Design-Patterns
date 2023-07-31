#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "VisualComponent.hpp"

class Button : public VisualComponent
{
    virtual void draw() override {
        std::cout<< "drawing button" <<std::endl;
    }
};
#endif //BUTTON_HPP