#include "Shop.h"
#include "Cafe.h"
#include "Drink.h"
#include "Customer.h"
#include <ctime>
#include <iostream>
using namespace std;

bool testCafe();
bool testDrink();
bool testCustomer();


int main() {
    srand(time(NULL));
    if (testCafe()) {
        cout << "Passed all Cafe test cases" << endl;
    }
    if (testDrink()) {
        cout << "Passed all Drink test cases" << endl;
    }
    if (testCustomer()) {
        cout << "Passed all Customer test cases" << endl;
    }
    return 0;
}

bool testCafe() {
    bool passed = true;

    Cafe cafe1("Cafe Feellove", "St. George");
    if (cafe1.getName() == "" || cafe1.getLocation() == "") {
        passed = false;
        cout << "FAILED default constructor test case" << endl;
    }

    for (int i = 0; i < 5; i++) {
        cafe1.addSale(1);
    }
    if (cafe1.getSales() != 5) {
        passed = false;
        cout << "FAILED addSale test case" << endl;
    }

    for (int i = 0; i < 5; i++) {
        cafe1.addCost(1);
    }
    if (cafe1.getCosts() != 5) {
        passed = false;
        cout << "FAILED addCost test case" << endl;
    }

    Drink drink1("Coffee", 5, 4);
    for(int i = 0 ; i < 5; i++){
        cafe1.addDrinkSold(drink1);
    }
    if (cafe1.getDrinksSold().size() != 5) {
        passed = false;
        cout << "FAILED addDrinkSold test case" << endl;
    }

    return passed;
}

bool testDrink() {
    bool passed = true;

    Drink drink2("Tea", 6, 3);
    if (drink2.getName() != "Tea" || drink2.getPrice() != 6 || drink2.getCost() != 3) {
        passed = false;
        cout << "FAILED default constructor test case" << endl;
    }

    return passed;
}

bool testCustomer() {
    bool passed = true;

    Drink drink3("Mocha", 5, 2);
    Customer customer1(1, drink3);
    if (customer1.getOrderNum() != 1) {
        passed = false;
        cout << "FAILED default constructor test case" << endl;
    }

    return passed;
}