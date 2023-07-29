#include "Builder.hpp"

#include "GLFWButton.hpp"
#include "Window.hpp"

class GLFWBuilder : public Builder
{
public:
    void buildButton() override {
        currWindow->addButton(std::make_unique<GLFWButton>());
    }

    void buildWindow() override {
        currWindow = std::make_unique<Window>();
    }

    std::unique_ptr<Window> getWindow() override {
        return std::move(currWindow);
    }

private:
    std::unique_ptr<Window> currWindow;

};