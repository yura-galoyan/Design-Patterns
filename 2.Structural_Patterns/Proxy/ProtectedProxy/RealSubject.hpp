#ifndef REAL_SUBJECT_HPP
#define REAL_SUBJECT_HPP

#include "Subject.hpp"

class RealSubject : public Subject
{
public:
    virtual void request() override {
        std::cout<<"real subject handling request" <<std::endl;
    } 
};


#endif //REAL__SUBJECT_HPP