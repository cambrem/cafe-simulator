#include "Drink.h"
using namespace std;

Drink::Drink(string name, long price, long cost) {
    this->name = name;
    this->price = price;
    this->cost = cost;
}

string Drink::getName(){
    return name;
}

long Drink::getPrice(){
    return price;
}

long Drink::getCost(){
    return cost;
}

void Drink::setName(string name) {
    this->name = name;
}

void Drink::setPrice(long price) {
    this->price = price;
}

void Drink::setCost(long cost) {
    this->cost = cost;
}

void Drink::printDrink() {
    cout << name << endl;
}

