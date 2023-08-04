
#include "CareTaker.hpp"
#include "Originator.hpp"

int main(){
    Originator o("initial state");
    CareTaker ct(&o);
    ct.backUp();
    o.setState("second state");
    o.setState("third state");
    std::cout<<o.getState() << std::endl;
    ct.undo();
    std::cout<<o.getState() << std::endl;
}