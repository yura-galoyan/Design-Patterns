#include "AbstractButton.hpp"

#include "TextView.hpp"

class TextButton : public AbstractButton
{
public:
    virtual void press() override {
        setName("text adapter");
        std::cout<<"Text button pressed: "<< text.getName()<<std::endl;
    }
    void setName(std::string otherText){
        text.setName(otherText);
    }
private:
    TextView text;
};