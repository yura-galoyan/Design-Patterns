#pragma once
#include "AbstractCreator.hpp"

#include "SFMLButton.hpp"

class SFMLCreator : public AbstractCreator
{
public:
   std::unique_ptr<AbstractButton> create() const override{
        return std::make_unique<SFMLButton>();
   }
};