#ifndef CONTEXT_HPP
#define CONTEXT_HPP

template<typename Policy>
class Context
{
public:
    void run(){
        policy.execute();
    }
    
private:
    Policy policy;
};

#endif //CONTEXT_HPP