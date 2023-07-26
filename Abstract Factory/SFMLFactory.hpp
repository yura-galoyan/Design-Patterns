#pragma once
#include "AbstractFactory.hpp"

#include "SFMLButton.hpp"

class SFMLFactory : public AbstractFactory
{
public:
   std::unique_ptr<AbstractButton> createButton() const override{
        return std::make_unique<SFMLButton>();
   }
};