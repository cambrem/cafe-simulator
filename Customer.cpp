#include "Customer.h"

Customer::Customer(int orderNum, Drink order) {
    this->orderNum = orderNum;
    this->order = order;
}

int Customer::getOrderNum() {
    return orderNum;
}

Drink Customer::getOrder(){
    return order;
}

void Customer::setOrderNum(int num) {
    this->orderNum = num;
}

void Customer::setOrder(Drink order) {
    this->order = order;
}

void Customer::orderDrink(vector<Drink> menu){
    int order = rand() % menu.size();
    setOrder(menu[order]);
}