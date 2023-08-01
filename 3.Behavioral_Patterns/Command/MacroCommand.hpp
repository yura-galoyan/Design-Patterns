#ifndef MACRO_COMMAND_HPP
#define MACRO_COMMAND_HPP

#include "Command.hpp"

#include <list>

class MacroCommand : public Command
{
public:
    void add(std::unique_ptr<Command> command){
        commands.push_back(std::move(command));
    }
    virtual void execute() override {
        for(auto& comand : commands){
            comand->execute();
        }
    } 
    void remove(std::unique_ptr<Command> command){
        
    }

private:
    std::list<std::unique_ptr<Command>> commands;
};
#endif //MACRO_COMMAND_HPP
