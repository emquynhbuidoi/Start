#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int S = 0;
    cout << "Enter: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        S += i;
    }
    cout << "Sum all number of " << n << " are " << S;

    return 0;
}