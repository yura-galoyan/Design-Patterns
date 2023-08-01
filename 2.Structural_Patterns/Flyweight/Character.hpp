#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>

class Character
{
public:
    Character(char c_)
        :c(c_) {}

    void write(int count){
        while(count--){
            std::cout<<c;
        }
    }
private:
    char c;
};

#endif //CHARACTER_HPP