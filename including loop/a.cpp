#include "a.hpp"
#include "b.hpp"

void a::write(b *test){
    test->write(this);
    std::cout<<"class a" << std::endl;
}
