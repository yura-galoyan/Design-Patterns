#ifndef EXTENDED_HANDLER_HPP
#define EXTENDED_HANDLER_HPP

#include "Handler.hpp"

#include <iostream>

class ExtendedHandler : public Handler
{
public:
    virtual void setNext(Handler* handler) override {
        this->nextHandler = handler;
    }
    virtual void handle(std::string request) override {
        if(nextHandler){
            std::cout<<"passing to next" << std::endl;
            nextHandler->handle(request);
        }
        else {
            std::cout << "Handler was not found" << std::endl;
        }
    }

private:
    Handler* nextHandler{nullptr};
};

#endif //EXTENDED_HANDLER_HPP