#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int numA, numB, total;
    char c;

    cout << "Enter number A: ";
    cin >> numA;
    cout << "Enter number B: ";
    cin >> numB;
    cout << "Enter operator: ";
    cin >> c;

    switch (c)
    {
    case '+':
        total = numA + numB;
        break;
    case '-':
        total = numA - numB;
    case '*':
        total = numA * numB;
    case '/':
        total = numA / numB;
    case '%':
        total = numA % numB;
    default:
        cout << "You enter wrong";
        break;
        cout << numA << c << numB << " = " << total;
    }
}