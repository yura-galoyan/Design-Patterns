
#include <memory>


#include "ConcreteMediator.hpp"
#include "Component1.hpp"
#include "Component2.hpp"


int main(){
    auto c1 = std::make_unique<Component1>();
    auto c2 = std::make_unique<Component2>();
    
    
    auto m = std::make_unique<ConcreteMediator>(c1.get(), c2.get());

    c1->do1();
    c2->do2();




}