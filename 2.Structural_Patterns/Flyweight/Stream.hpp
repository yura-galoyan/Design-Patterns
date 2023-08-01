#ifndef MY_STREAM_HPP
#define MY_STREAM_HPP

#include "CharacterFactory.hpp"

#include <memory>

class Stream
{
public:
    void output(){
        std::unique_ptr<CharacterFactory> factory = std::make_unique<CharacterFactory>();

        auto letter1 = factory->getCharacter('a');
        auto letter2 = factory->getCharacter('a');
        auto letter3 = factory->getCharacter('b');

        letter1.write(5);
        std::cout<<std::endl;
        letter2.write(4);
        std::cout<<std::endl;
        letter3.write(2);
        std::cout<<std::endl;

    }
};

#endif //MY_STREAM_HPP