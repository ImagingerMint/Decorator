#include "cinnamon.h"
using std::string;

int Cinnamon::getPriceIngredient()
{
    return price_ingredient;
}

int Cinnamon::getPrice()
{
    return component.getPrice() + getPriceIngredient();
}

string Cinnamon::getName()
{
    return name;
}

Cinnamon::Cinnamon(Base &component) : Base(), component(component)
{
    price = component.getPrice() + this->getPriceIngredient();
    name = "Cinnamon";
}