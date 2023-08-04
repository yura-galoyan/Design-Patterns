#ifndef STATE_HPP
#define STATE_HPP

class User;

#include <memory>

class State
{
public:
    virtual void open(User* user) { };
    virtual void close(User* user) { };
protected:
    void changeState(User* user, std::unique_ptr<State> st);
};

#endif //STATE_HPP