#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    cout << "Nhap so thu nhat: ";
    cin >> num1;
    cout << "Nhap so thu hai: ";
    cin >> num2;
    if (num1 > num2)
    {
        cout << num1 << " > " << num2;
    }
    else if (num1 < num2)
    {
        cout << num1 << " < " << num2;
    }
    else
    {
        cout << num1 << " = " << num2;
    }

    return 0;
}