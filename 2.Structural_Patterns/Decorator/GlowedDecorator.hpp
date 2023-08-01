#ifndef GLOWED_DECORATOR_HPP
#define GLOWED_DECORATOR_HPP

#include "Decorator.hpp"

class GlowedDecorator : public Decorator
{
public:
    GlowedDecorator(std::shared_ptr<VisualComponent> component)
        : Decorator(component) {  }
    
    virtual void draw() override{
        std::cout<< "glowing" <<std::endl;
        Decorator::draw();
    }
};

#endif //GLOWED_DECORATOR_HPP