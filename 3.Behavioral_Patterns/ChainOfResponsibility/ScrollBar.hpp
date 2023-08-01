#ifndef SCROLL_BAR_HPP
#define SCROLL_BAR_HPP

#include "ExtendedHandler.hpp"

class ScrollBar : public ExtendedHandler
{
public:
    virtual void handle(std::string request) override{
        if(request == "scrollbar"){
            std::cout << "handling scrollbar" << std::endl;
        }
        else{
            ExtendedHandler::handle(request);
        }
    }
};


#endif //SCROLL_BAR_HPP