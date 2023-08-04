#ifndef ORIGINATOR_MEMENTO_HPP
#define ORIGINATOR_MEMENTO_HPP

#include <string>
#include <iostream>

class OriginatorMemento
{
private:
    std::string state;
    std::string getState(){
        return state;
    }
    void setState(std::string state) {
        this->state = state;
    }


private:
    friend class Originator;
};

#endif //ORIGINATOR_MEMENTO_HPP