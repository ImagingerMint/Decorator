#include <iostream>
#include "base.h"
#include "Ingredients/milk.h"
#include "Ingredients/cinnamon.h"
using std::cout, std::endl;

int main()
{
    Base coffee = Base();
    cout << coffee.getName() << "   + " << coffee.getPrice() << endl;

    Milk coffee_milk = Milk(coffee);
    cout << coffee_milk.getName() << "     + " << coffee_milk.getPriceIngredient() << endl;

    Cinnamon coffee_milk_cinnamon = Cinnamon(coffee_milk);
    cout << coffee_milk_cinnamon.getName() << " + " << coffee_milk_cinnamon.getPriceIngredient() << endl;

    cout << "TOTAL      " << coffee_milk_cinnamon.getPrice() << endl;
    return 0;
}