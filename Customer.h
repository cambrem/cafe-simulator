#ifndef M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_CUSTOMER_H
#define M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_CUSTOMER_H
#include <string>
#include "Drink.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

class Customer{
private:
    // field variables for order number and order (Drink object)
    int orderNum;
    Drink order = Drink("Default order", 0, 0);
public:
    // constructor takes order number and order and sets the field values
    Customer(int orderNum, Drink order);

    // getters take nothing and return the field values
    int getOrderNum();
    Drink getOrder();

    // setters to set the field values
    void setOrderNum(int num);
    void setOrder(Drink order);

    // orderDrink method selects a random drink from the menu and sets the Customer's order with it
    void orderDrink(vector<Drink> menu);
};
#endif //M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_CUSTOMER_H
