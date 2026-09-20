#include "milk.h"
using std::string;

int Milk::getPriceIngredient()
{
    return price_ingredient;
}

int Milk::getPrice()
{
    return component.getPrice() + getPriceIngredient();
}

string Milk::getName()
{
    return name;
}

Milk::Milk(Base &component) : Base(), component(component)
{
    price = component.getPrice() + this->getPriceIngredient();
    name = "Milk";
}