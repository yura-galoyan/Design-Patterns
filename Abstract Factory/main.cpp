#include "SFMLFactory.hpp"
#include "GLFWFactory.hpp"

void createGame(const AbstractFactory& factory){
    auto AbstractButton = factory.createButton();
    AbstractButton->press();
}

int main(){
    GLFWFactory factory1;
    SFMLFactory factory2;
    createGame(factory1);
    createGame(factory2);
}