#ifndef SFML_WINDOW_IMP_HPP
#define SFML_WINDOW_IMP_HPP

#include "WindowImp.hpp"

class SFMLWindowImp : public WindowImp
{
public:
    virtual void runWindow() override{
        std::cout <<" sfml imp" <<std::endl;
    };
};

#endif //SFML_WINDOW_IMP_HPP