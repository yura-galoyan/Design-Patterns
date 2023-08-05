

#include <vector>

#include "Element.hpp"

#include "ElementA.hpp"
#include "ElementB.hpp"

#include "VisitorFirst.hpp"
#include "VisitorSecond.hpp"


#include <memory>

int main(){
    std::vector<std::unique_ptr<Element> > els;

    std::unique_ptr<Element> a = std::make_unique<ElementA>();
    std::unique_ptr<Element> b = std::make_unique<ElementB>();

    VisitorFirst vf;
    VisitorSecond vs;

    els.push_back(std::move(a));
    els.push_back(std::move(b));

    for( auto& e : els){
        e->accept(vs);
    }

}