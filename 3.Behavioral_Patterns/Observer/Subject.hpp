#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <list>
#include <algorithm>
#include "Observer.hpp"

class Subject
{
public:
    virtual void notify() = 0;

    void attach(Observer* observer){
        observers.push_back(observer);
    }

    void detach(Observer* observer){
        observers.erase(std::remove(observers.begin(), observers.end(), observer)); 
        
    }

protected:
    std::list<Observer*> observers;
};

#endif //SUBJECT_HPP