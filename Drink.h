#ifndef M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_DRINK_H
#define M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_DRINK_H
#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Drink{
private:
    // field variables for name, price, and cost
    string name;
    long price;
    long cost;
public:
    // constructor takes name, price and cost and sets the field values
    Drink(string name, long price, long cost);

    // getters take nothing and return the field values
    string getName();
    long getPrice();
    long getCost();

    // setters to set the field values
    void setName(string name);
    void setPrice(long price);
    void setCost(long cost);

    // print drink prints out the name of the drink
    void printDrink();
};


#endif //M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_DRINK_H
