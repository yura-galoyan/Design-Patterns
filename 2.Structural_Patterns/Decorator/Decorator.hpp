#ifndef DECORATOR_HPP
#define DECORATOR_HPP

#include "VisualComponent.hpp"
#include <memory>

class Decorator : public VisualComponent
{
public:
    Decorator(std::shared_ptr<VisualComponent> comp)
        : component(comp){ }

    virtual void draw() override{
        component->draw();
    }

private:
    std::shared_ptr<VisualComponent> component;
};



#endif //DECORATOR_HPP