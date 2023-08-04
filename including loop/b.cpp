#include "b.hpp"
#include "a.hpp"


void b::write(a* test){
    static int d{};
    ++d;
    std::cout<<"class b" << std::endl;
    if(d == 5) return;
    test->write(this);
}