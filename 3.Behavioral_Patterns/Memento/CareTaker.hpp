#ifndef CARETAKER_HPP
#define CARETAKER_HPP

#include "Originator.hpp"
#include "OriginatorMemento.hpp"

class CareTaker
{
public:
    CareTaker(Originator* originator_)
        :originator(originator_) { }

    void backUp(){
        memento = originator->createMemento();
    }

    void undo(){
        originator->restore(memento.get());
    }

private:
    Originator* originator;
    std::unique_ptr<OriginatorMemento> memento;
};

#endif //CARETAKER_HPP