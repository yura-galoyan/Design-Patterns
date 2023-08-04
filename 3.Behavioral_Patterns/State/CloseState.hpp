#ifndef OPEN_STATE_HPP
#define OPEN_STATE_HPP

#include "State.hpp"

class CloseState : public State
{
public:
    virtual void open(User* user) override ;
    virtual void close(User* user) override { };
};

#endif //OPEN_STATE_HPP