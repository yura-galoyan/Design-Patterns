
#include "ConcreteObserver.hpp"
#include "ConcreteSubject.hpp"


int main(){
    ConcreteSubject cs("initial state");
    ConcreteObserver co1(&cs);
    ConcreteObserver co2(&cs);
    ConcreteObserver co3(&cs);


    co1.show();
    co2.show();
    co3.show();

    cs.setState("new state");
    cs.notify();

    co1.show();
    co2.show();
    co3.show();

    cs.detach(&co2);

    cs.setState("second state");
    cs.notify();

    co1.show();
    co2.show();
    co3.show();

}