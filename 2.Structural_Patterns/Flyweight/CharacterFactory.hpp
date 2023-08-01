#ifndef CHARACTER_FACTORY_HPP
#define CHARACTER_FACTORY_HPP

#include <map>
#include <unordered_map>
#include "Character.hpp"

class CharacterFactory
{
public:
    Character getCharacter(char key){
        if(!characters.count(key)){
            std::cout<<"new one"<<std::endl;
            characters.insert({key, Character{key}});
            return characters.at(key);
        }
        std::cout<<"old one" <<std::endl;
        return characters.at(key);
    }


private:
    std::unordered_map<char, Character> characters;
};

#endif //CHARACTER_FACTORY_HPP
