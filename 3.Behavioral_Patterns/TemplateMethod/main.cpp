#include "ConcreteApp.hpp"


#include <memory>

int main(){
    std::unique_ptr<AbstractApp> app = std::make_unique<ConcreteApp>();

    app->templateMethode();


}