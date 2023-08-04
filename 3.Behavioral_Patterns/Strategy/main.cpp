
#include "Context.hpp"

#include <iostream>

class FastPolicy
{
public:
    void execute(){
        std::cout<<"We are really fast...woo woo!" <<std::endl;
    }
};

class SlowPolicy
{
public:
    void execute(){
        std::cout<<"We are really slow...wee wee!" <<std::endl;
    }
};


main(){
    Context<SlowPolicy> c;
    c.run();
}