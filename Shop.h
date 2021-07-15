#ifndef M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_SHOP_H
#define M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_SHOP_H
#include <string>
using namespace std;

class Shop{
private:
    // fields for name, location, sales and costs for a Shop
    string name;
    string location;
    long sales;
    long costs;
public:
    // constructor takes name and location and sets those values, setting sales and costs to 0
    Shop(string name, string location);

    // getters take nothing and return field values
    string getName();
    string getLocation();
    long getSales();
    long getCosts();

    // setters to set name and location
    void setName(string name);
    void setLocation(string location);

    // adders take individual sale and cost longs and add to sales and costs field variables
    void addSale(long sale);
    void addCost(long cost);
};
#endif //M2OEP_CLASS_RELATIONSHIPS_CBREMNER_EWEST3_SHOP_H
