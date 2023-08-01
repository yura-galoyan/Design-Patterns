#include "RealSubjectProxy.hpp"
#include "RealSubject.hpp"

void act(Subject& sub){
    sub.request();
}

int main(){
    std::unique_ptr<RealSubjectProxy> proxy = std::make_unique<RealSubjectProxy>(std::make_unique<RealSubject>());

    act(*proxy);

}