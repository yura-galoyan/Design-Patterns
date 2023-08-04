#include "CloseState.hpp"
#include "OpenState.hpp"

#include "User.hpp"

#include <iostream>

void CloseState::open(User *user){
    std::cout<<"Close State: opening..." <<std::endl;
    user->changeState(std::make_unique<OpenState>());
}