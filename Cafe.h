#ifndef M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_CAFE_H
#define M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_CAFE_H

#include <string>
#include "Shop.h"
#include "Drink.h"
using namespace std;

class Cafe : public Shop {
private:
    // field variables for menu and drinksSold (both vectors of Drink objects)
    vector<Drink> menu;
    vector<Drink> drinksSold;
public:
    // constructor takes a name and location and sets these values using the parent class Shop constructor
    Cafe(string name, string location);

    // getters take nothing and return the field values
    vector<Drink> getMenu();
    vector<Drink> getDrinksSold();

    // adders add Drink items to the menu or to drinksSold
    void addMenuItem(Drink menuItem);
    void addDrinkSold(Drink drinkSold);

    // writeMenu prompts the user for a number of menu items, then asks them for the
    // name, price, and cost of each and adds them to the  menu
    void writeMenu();
};
#endif //M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_CAFE_H
