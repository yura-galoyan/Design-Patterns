#ifndef BORDERED_DECORATOR_HPP
#define BORDERED_DECORATOR_HPP

#include "Decorator.hpp"

class BorderedDecorator : public Decorator
{
public:
    BorderedDecorator(std::shared_ptr<VisualComponent> component)
        : Decorator(component) {  }

    virtual void draw() override{
        std::cout << "drawing border" << std::endl;
        Decorator::draw();
    }
};


#endif //BORDERED_DECORATOR_HPP