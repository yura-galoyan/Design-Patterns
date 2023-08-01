#ifndef HANDLER_HPP
#define HANDLER_HPP

#include <memory>
#include <string>

class Handler
{

public:
    virtual void setNext(Handler* handler) = 0;
    virtual void handle(std::string request) = 0;

};

#endif //HANDLER_HPP