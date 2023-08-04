#ifndef USER_HPP
#define USER_HPP

#include <memory>

#include "State.hpp"

class User
{
public:
    User(std::unique_ptr<State> state_){
        state = std::move(state_);
    }
    void changeState(std::unique_ptr<State> state_){
        state = std::move(state_);
    };

    void open(){
        state->open(this);
    }
    void close(){
        state->close(this);
    }

    
private:
    friend class State;
    std::unique_ptr<State> state;
    int age;
};

#endif //USER_HPP