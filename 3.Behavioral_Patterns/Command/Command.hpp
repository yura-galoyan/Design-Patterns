#ifndef COMMAND_HPP
#define COMMAND_HPP

#include <memory>

class Command
{
public:
    virtual void execute() = 0;
    virtual ~Command(){
        
    };
};

#endif //COMMAND_HPP