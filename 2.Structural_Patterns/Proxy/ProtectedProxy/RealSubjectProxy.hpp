#ifndef PROXY_HPP
#define PROXY_HPP

#include "RealSubject.hpp"

class RealSubjectProxy : public Subject
{
public:
    RealSubjectProxy(std::unique_ptr<RealSubject> sub)
        :subject(std::move(sub)) {}
    virtual void request() override{
        std::cout<<"proxy handling request..."<<std::endl;
        if(allowed){
            subject->request();
        }
        else{
            std::cout<<"unallowed access!"<<std::endl;
        }
    } 
private:
    bool allowed{false};
    std::unique_ptr<RealSubject> subject;
};
#endif //PROXY_HPP