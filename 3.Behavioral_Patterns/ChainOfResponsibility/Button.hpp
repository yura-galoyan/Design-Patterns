#ifndef BUTTON_HPP
#define BUTTON_HPP

#include "ExtendedHandler.hpp"

class Button : public ExtendedHandler
{
public:
    virtual void handle(std::string request) override {
        if(request == "button"){
            std::cout<<"handling button request"<<std::endl;
        }
        else{
            ExtendedHandler::handle(request);
        }
    }
};

#endif //BUTTON_HPP