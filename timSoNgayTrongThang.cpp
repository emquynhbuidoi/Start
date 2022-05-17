#include <iostream>
using namespace std;

int main()
{
    int month;
    cout << "Enter the number of months: ";
    cin >> month;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        cout << " Have are 31 days";
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        cout << " Have are 30 days";
        break;
    default:
        cout << "Have 28 or 29 days";
        break;
    }
}