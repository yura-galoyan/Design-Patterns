#ifndef MY_WINDOW_HPP
#define MY_WINDOW_HPP

#include "Composite.hpp"

class Window : public Composite
{
public:
    Window(std::string name){
        this->name = name;
    }
    virtual void draw() override {
        auto it = begin();

        std::cout<<"composite name is: " << name <<std::endl;
        for(; it != end(); ++it){
            (*it)->draw();
        }
    }
};


#endif //MY_WINDOW_HPP