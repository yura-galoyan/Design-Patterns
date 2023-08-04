#include "CloseState.hpp"
#include "OpenState.hpp"

#include "User.hpp"

#include <iostream>

void OpenState::close(User* user){
    std::cout<<"Open State: closing..." <<std::endl;
    changeState(user, std::make_unique<CloseState>());
}