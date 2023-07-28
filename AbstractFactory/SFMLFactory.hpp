#pragma once
#include "AbstractFactory.hpp"

#include "SFMLButton.hpp"

#include "SFMLCheckBox.hpp"

class SFMLFactory : public AbstractFactory
{
public:
   virtual std::unique_ptr<AbstractButton> createButton() const override{
        return std::make_unique<SFMLButton>();
   }
   virtual std::unique_ptr<CheckBox> createCheckBox() const override{
      return std::make_unique<SFMLCheckBox>();
   };
   
};