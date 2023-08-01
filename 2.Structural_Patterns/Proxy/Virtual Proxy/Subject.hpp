#ifndef SUBJECT_HPP
#define SUBJECT_HPP

#include <memory>
#include <iostream>
#include <string>


class Subject
{
public:
    Subject() = default;
    Subject(std::string name)
        :name(name) {}
    virtual void request() {
        std::cout<<"base subject"<<std::endl;
    };
protected:
    std::string name;
};




#endif //SUBJECT_HPP