#include "CloseState.hpp"
#include "OpenState.hpp"

#include "User.hpp"

int main(){
    auto user = std::make_unique<User>(std::make_unique<CloseState>());

    user->open();
    user->close();
    
}