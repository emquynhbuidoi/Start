#include <bits/stdc++.h>
using namespace std;

int main()
{
    float arr[4] = {3.4, 5.6, -2.4, -5.9};
    for (auto item : arr)
    {
        cout << item << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < 0)
        {
            cout << arr[i] << " ";
        }
    }

    return 0;
}