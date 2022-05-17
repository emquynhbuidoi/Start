#include <iostream>
using namespace std;

int main()
{
    int numb;
    cout << "Enter a Number: ";
    cin >> numb;
    if (numb > 0)
    {
        cout << numb << " is a positive number" << endl;
        if (numb % 2 == 0)
        {
            cout << numb << " is an even number";
        }
        else
        {
            cout << numb << " is odd";
        }
    }
    else if (numb < 0)
    {
        cout << numb << " is a negative number" << endl;
        if (numb % 2 == 0)
        {
            cout << numb << " is an even number";
        }
        else
        {
            cout << numb << " is odd";
        }
    }
    else
    {
        cout << numb << " is the number 0";
    }

    return 0;
}