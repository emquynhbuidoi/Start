#include <bits/stdc++.h>
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
        cout << numA << c << numB << " = " << total;
        break;
    case '-':
        total = numA - numB;
        cout << numA << c << numB << " = " << total;
        break;
    case '*':
        total = numA * numB;
        cout << numA << c << numB << " = " << total;
        break;
    case '/':
        total = numA / numB;
        cout << numA << c << numB << " = " << total;
        break;
    case '%':
        total = numA % numB;
        cout << numA << c << numB << " = " << total;
        break;
    default:
        cout << "You enter wrong";
        break;
    }

    return 0;
}
