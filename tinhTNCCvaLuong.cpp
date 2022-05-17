#include <iostream>
using namespace std;

int main()
{
    int bassicSalary = 1490000;
    int TNCT, salary;

    cout << "Enter TNCT: ";
    cin >> TNCT;

    if (TNCT < 12)
    {
        salary = 1.92 * bassicSalary;
        cout << salary;
    }
    else if (TNCT >= 12 && TNCT < 36)
    {
        salary = 2.34 * bassicSalary;
        cout << salary;
    }
    else if (TNCT >= 36 && TNCT < 60)
    {
        salary = 3 * bassicSalary;
        cout << salary;
    }
    else
    {
        salary = 4.5 * bassicSalary;
        cout << salary;
    }

    return 0;
}