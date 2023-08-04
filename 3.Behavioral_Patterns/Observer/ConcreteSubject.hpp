#ifndef CONCRETE_SUBJECT_HPP
#define CONCRETE_SUBJECT_HPP

#include "Subject.hpp"

#include <string>

class ConcreteSubject : public Subject
{
public:
    ConcreteSubject(std::string n)
        :name(n) {}

    virtual void notify() override{
        for(auto o : observers){
            o->update(this);
        }
    }
    void setState(std::string n){
        name = n;
    }
    std::string getState(){
        return name;
    }

private:
    std::string name;
};

#endif //CONCRETE_SUBJECT_HPP