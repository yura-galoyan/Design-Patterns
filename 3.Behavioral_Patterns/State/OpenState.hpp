#ifndef FIRST_STATE_HPP
#define FIRST_STATE_HPP

#include "State.hpp"

class OpenState : public State
{
public:
    virtual void open(User* user) override { };
    virtual void close(User* user) override ;
};

#endif //FIRST_STATE_HPP