#include <iostream>
using namespace std;

int main()
{
    int electricityPrice, quantity;

    cout << "Enter your honme's monthly electricity consumption: ";
    cin >> quantity;

    if (quantity < 50)
    {
        electricityPrice = quantity * 1678;
        cout << electricityPrice << " is the price of your house";
    }
    else if (quantity > 51 && quantity < 100)
    {
        electricityPrice = quantity * 1734;
        cout << electricityPrice << " is the price of your house";
    }
    else if (quantity > 101 && quantity < 200)
    {
        electricityPrice = quantity * 2014;
        cout << electricityPrice << " is the price of your house";
    }
    else if (quantity > 201 && quantity < 300)
    {
        electricityPrice = quantity * 2536;
        cout << electricityPrice << " is the price of your house";
    }
    else if (quantity > 301 && quantity < 400)
    {
        electricityPrice = quantity * 2834;
        cout << electricityPrice << " is the price of your house";
    }
    else
    {
        electricityPrice = quantity * 2917;
        cout << electricityPrice << " is the price of your house";
    }
    return 0;
}