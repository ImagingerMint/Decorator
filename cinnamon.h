#pragma once
#include "../base.h"

class Cinnamon : public Base
{
protected:
    Base &component;
    int price_ingredient = 15;

public:
    int getPriceIngredient();
    int getPrice() override;
    std::string getName() override;
    Cinnamon(Base &component);
};