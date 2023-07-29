
#include <utility>
#include <string>
// this class cant be changed
class TextView
{
public:
    void setName(std::string text){
        name = text;
    }
    std::string getName() const {
        return name;
    }
private:
    std::string name;
};
