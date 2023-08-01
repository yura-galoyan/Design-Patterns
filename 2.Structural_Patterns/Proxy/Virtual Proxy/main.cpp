#include "RealSubjectProxy.hpp"
#include "RealSubject.hpp"

void act(Subject& sub){
    sub.request();
    std::cout<<std::string(100,'-')<<std::endl;
    sub.request();
}

int main(){
    std::unique_ptr<Proxy> proxy = std::make_unique<Proxy>("s1");


    act(*proxy);

}