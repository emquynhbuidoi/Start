#include <iostream>
using namespace std;

int main()
{
    int actualSpeed, specifiedSpeed;

    cout << "Enter the specified speed: ";
    cin >> specifiedSpeed;
    cout << "Enter actual speed: ";
    cin >> actualSpeed;

    if (actualSpeed >= (specifiedSpeed + 5) && actualSpeed < (specifiedSpeed + 10))
    {
        cout << "You are fined 300 000vnd";
    }
    else if (actualSpeed >= (specifiedSpeed + 10) && actualSpeed < (specifiedSpeed + 20))
    {
        cout << "You are fined 1 000 000vnd";
    }
    else if (actualSpeed < specifiedSpeed)
    {
        cout << "Thank you!!!";
    }
    else
    {
        cout << "You are fined 5 000 000vnd";
    }

    return 0;
}