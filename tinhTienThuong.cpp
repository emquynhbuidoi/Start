#include <iostream>
using namespace std;

int main()
{
    int bonus, salary, bassicSalary;
    cout << "Enter salary: ";
    cin >> salary;

    if (salary < 2000000)
    {
        bonus = 1.3 * 2000000;
        cout << bonus << " is your bonus";
    }
    else if (salary >= 2000000 && salary < 3000000)
    {
        bonus = 1.5 * 2000000;
        cout << bonus << " is your bonus";
    }
    else if (salary >= 3000000 && salary < 5000000)
    {
        bonus = 1.7 * 2000000;
        cout << bonus << " is your bonus";
    }
    else
    {
        bonus = 1.9 * 2000000;
        cout << bonus << " is your bonus";
    }
    return 0;
}