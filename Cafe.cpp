#include "Cafe.h"
#include <string>
#include "Drink.h"

using namespace std;

Cafe::Cafe(string name, string location) : Shop(name, location) {
}

vector<Drink> Cafe::getMenu() {
    return menu;
}

vector<Drink> Cafe::getDrinksSold() {
    return drinksSold;
}

void Cafe::addMenuItem(Drink menuItem) {
    menu.push_back(menuItem);
}

void Cafe::addDrinkSold(Drink drinkSold) {
    drinksSold.push_back(drinkSold);
}

void Cafe::writeMenu(){
    menu.clear();
    int numItems;
    cout << "How many menu items would you like to add? ";
    cin >> numItems;
    string name;
    long price;
    long cost;
    for(int i = 0; i < numItems; i++){
        cout << "Enter name of drink: ";
        cin >> name;
        cout << "Enter price: $";
        cin >> price;
        cout << "Enter cost: $";
        cin >> cost;
        menu.push_back(Drink(name, price, cost));
    }
}
