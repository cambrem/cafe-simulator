# Cafe Simulator

This program includes 4 classes: Shop, Cafe, Drink, and Customer. 
Shop is the parent class and includes fields for the name, location, sales (money coming into the shop), and costs (expenses for the shop) for a shop.
It has a constructor which takes a name and location, sets these fields with the values given, and sets sales and costs to zero, getters for all four fields, setters for name and location, and methods to add to sales and costs.
The Cafe class is a child of Shop, and it adds the fields of menu and drinksSold, each vectors of Drink class objects.
It has a constructor which takes name and location (uses Shop constructor), getters for menu and drinksSold, methods to add items to the menu and to drinksSold, and a writeMenu method which prompts the user to input the number of menu items they want to add, and then the name, price and cost for each item.
The Drink class has fields for the name, price, and cost (cost to make the drink) of a drink. 
It includes a constructor which takes name, price, and cost and sets the fields, getters and setters for each of these fields, and a method printDrink which prints out the name of the drink.
As stated above, the Cafe class fields of menu and drinksSold are vectors of type Drink, and therefore Drink is a component class of Cafe. 
Customer is the unrelated class for this program, and it has fields for orderNum (which is essentially a customer identifier) and order, which is a Drink object (therefore Drink is also a componant of Customer).
It has a constructor which takes orderNum and order and sets these fields, getters and setters for each field, and a method orderDrink which randomly picks a Drink from the menu and sets the order to that Drink.

The main program first creates a Cafe object, then calls the writeMenu method on it to prompt the user to input the menu. 
It then creates a vector of Customers, to which it assigns the value returned by calling the simulateDay function with the menu.
simulateDay is a global function written in main.cpp which takes a menu (vector of Drinks) and comes up with a random number of customers between 1 and 100.
It then calls orderDrink on each customer, and returns a vector of customers complete with their Drink orders.
The main function then loops through this customer vector, tallying up the total costs and prices for all the orders from the day and printing out each customer's order number and order.
Finally, it uses these tallies to calculate the profit for the day and prints the result.
