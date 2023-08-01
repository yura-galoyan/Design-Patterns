#ifndef WRITE_COMMAND_HPP
#define WRITE_COMMAND_HPP

#include "Console.hpp"
#include "Command.hpp"

class WriteCommand : public Command
{
public:
    WriteCommand(Console& console_)
        :console(console_) { }
    virtual void execute() override{
        console.write();
    }

private:
    Console& console;

};

#endif //WRITE_COMMAND_HPP