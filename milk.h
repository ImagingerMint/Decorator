#pragma once
#include "../base.h"

class Milk : public Base
{
protected:
    Base &component;
    int price_ingredient = 10;

public:
    int getPriceIngredient();
    int getPrice() override;
    std::string getName() override;
    Milk(Base &component);
};