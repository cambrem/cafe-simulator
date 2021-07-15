#include "Cafe.h"
#include "Customer.h"
#include <iostream>
#include <vector>
using namespace std;

// declare global function simulateDay
vector<Customer> simulateDay(vector<Drink> menu);
int main() {
    // create cafe object
    Cafe cafe1 = Cafe("C++ Cafe", "Burlington");
    // create menu for cafe
    cafe1.writeMenu();
    // call simulate day to return a vector of random size between 1 and 100 of
    // customers with random orders from menu and store in customers vector
    vector<Customer> customers = simulateDay(cafe1.getMenu());

    cout << "\n\nDaily sales for " << cafe1.getName() << ": " << endl;
    cout << "-----------------------" << endl;
    // declare variables for total sales and total costs
    long totalSales = 0;
    long totalCosts = 0;
    // loop through customers vector, tallying up sales and costs and printing out customer numbers and orders
    for (int i = 0; i < customers.size(); i++){
        totalSales += customers[i].getOrder().getPrice();
        totalCosts += customers[i].getOrder().getCost();
        cout << "Customer " << customers[i].getOrderNum() << ": ";
        customers[i].getOrder().printDrink();
    }
    // calculate total profit from sales and costs and print
    long profit = totalSales - totalCosts;
    cout << "-----------------------" << endl;
    cout << "Total Profit for the day: $" << profit << endl;
    return 0;
}

/* global function simulateDay takes a menu (vector of Drinks) and comes up with a random number of customers between 1 and 100.
  It then calls orderDrink on each customer, and returns a vector of customers complete with their Drink orders.
 */
vector<Customer> simulateDay(vector<Drink> menu){
    // declare int numCustomers and assign it a random value 1-100
    int numCustomers;
    srand(time(0));
    numCustomers = rand() % 100;

    // declare vector of Customers customers
    vector<Customer> customers;
    // add numCustomers Customer objects to customers
    for(int i = 0; i < numCustomers; i++){
        customers.push_back(Customer(i, Drink("Default Order", 0, 0)));
    }
    // loop through customers vector and call orderDrink on each to assign it a random drink from the menu
    for (int i = 0; i < customers.size(); i++){
        customers[i].orderDrink(menu);
    }
    // return customers vector
    return customers;
}