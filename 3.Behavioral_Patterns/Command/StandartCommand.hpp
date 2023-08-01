#ifndef STANDART_COMMAND_HPP
#define STANDART_COMMAND_HPP

#include "Command.hpp"

template<typename Action>
class StandartCommand : public Command
{
public:
    StandartCommand(Action action )
        :action(action) {}

    virtual void execute() override{
        action();
    }
private:
    Action action;
};

#endif //STANDART_COMMAND_HPP
