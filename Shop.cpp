#include "Shop.h"
using namespace std;

Shop::Shop(string name, string location) {
    this->name = name;
    this->location = location;
    sales = 0;
    costs = 0;
}

string Shop::getName(){
    return name;
}

string Shop::getLocation(){
    return location;
}

long Shop::getSales(){
    return sales;
}

long Shop::getCosts(){
    return costs;
}

void Shop::setName(string name) {
    this->name = name;
}

void Shop::setLocation(string location) {
    this->location = location;
}

void Shop::addSale(long sale) {
    sales += sale;
}

void Shop::addCost(long cost) {
    costs += cost;
}


