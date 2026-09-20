#include "base.h"
using std::string;

int Base::getPrice()
{
    return price;
}

string Base::getName()
{
    return name;
}

Base::Base()
{
    
    price = 25;
    name = "Coffee";
}