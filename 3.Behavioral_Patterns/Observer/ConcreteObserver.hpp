#ifndef CONCRETE_OBSERVER_HPP
#define CONCRETE_OBSERVER_HPP

#include <iostream>

#include "ConcreteSubject.hpp"

class ConcreteObserver : public Observer
{
public:
    ConcreteObserver(ConcreteSubject* s)
        :subject(s) {
            s->attach(this);
            text = s->getState();
         }

    virtual void update( Subject* s) override{
        if(this->subject == s){
            text = dynamic_cast<ConcreteSubject*>(s)->getState();
            std::cout<<"Concrete observer is updated by: " << text << std::endl;

        }
    }
    void show(){
        std::cout << text << std::endl;
    }
private:
    ConcreteSubject* subject;
    std::string text;
};

#endif //CONCRETE_OBSERVER_HPP