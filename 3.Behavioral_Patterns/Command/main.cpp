

#include "StandartCommand.hpp"
#include "MacroCommand.hpp"
#include "WriteCommand.hpp"
#include "Console.hpp"

#include <functional>

int main(){
    MacroCommand commands;
    Console console;

    commands.add(std::make_unique<WriteCommand>(console));
    commands.add(std::make_unique<StandartCommand<std::function<void()>>>(
        [&console](){ console.write(); }
    ));
    

    commands.execute();
}