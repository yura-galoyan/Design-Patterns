

#include "Button.hpp"
#include "BorderedDecorator.hpp"
#include "GlowedDecorator.hpp"

void act(VisualComponent& component){
    component.draw();
}


int main(){
    using std::make_shared;
    auto button = std::make_shared<Button>();
    auto btn = make_shared<GlowedDecorator>(make_shared<BorderedDecorator>( make_shared<BorderedDecorator>( button )));
    act(*btn);
}