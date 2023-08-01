#ifndef FACADE_HPP
#define FACADE_HPP

#include "Subsystem.hpp"

class Facade
{
public:
    void clientOperation(){
        s1.operation();
    }

private:
    Subsystem s1;
};

#endif //FACADE_HPP