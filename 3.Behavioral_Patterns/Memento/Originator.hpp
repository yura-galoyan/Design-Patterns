#ifndef ORIGINATOR_HPP
#define ORIGINATOR_HPP

#include <string>
#include "OriginatorMemento.hpp"

#include <memory>

#include <cassert>

class Originator
{
public:
    Originator(std::string state)
        :state(state) {}

    void setState(std::string state_){
        state = state_;
    }

    auto getState(){
        return state;
    }

    void restore(OriginatorMemento* memento){
        state = memento->state;
    }

    std::unique_ptr<OriginatorMemento> createMemento(){
        std::unique_ptr<OriginatorMemento> backup = std::make_unique<OriginatorMemento>();
        backup->setState(state);
        return std::move(backup);
    }

private:
    std::string state;
};


#endif //ORIGINATOR_HPP