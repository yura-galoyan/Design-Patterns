#ifndef CONSOLE_HPP
#define CONSOLE_HPP

#include <iostream>

class Console
{
public:
    void write(){
        std::cout<<"writing command was executed in console" <<std::endl;
    }
};

#endif //CONSOLE_HPP