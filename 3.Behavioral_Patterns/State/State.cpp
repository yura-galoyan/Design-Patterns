#include "State.hpp"

#include "User.hpp"

void State::changeState(User* user, std::unique_ptr<State> st){
    user->changeState(std::move(st));
}