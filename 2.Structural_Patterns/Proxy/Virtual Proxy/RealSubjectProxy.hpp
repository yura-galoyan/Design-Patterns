#ifndef PROXY_HPP
#define PROXY_HPP

#include "RealSubject.hpp"

class Proxy : public Subject
{
public:
    Proxy(std::string name)
        :Subject(name) {}

    virtual void request() override{
        std::cout<<"handling request"<<std::endl;
        if(!rSubject){
            std::cout<<"creating subject"<<std::endl;
            rSubject = std::make_unique<RealSubject>(name);
        }
        rSubject->request();
    }
private:
    bool allowed{false};
    std::unique_ptr<RealSubject> rSubject;
};
#endif //PROXY_HPP