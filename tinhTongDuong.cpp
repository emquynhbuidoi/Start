#include <bits/stdc++.h>
using namespace std;

int main()
{
    float arr[4] = {-4.6, 5.7, -2.4, 5.7};
    for (auto item : arr)
    {
        cout << item << endl;
    }
    float S = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > 0)
        {
            S += arr[i];
        }
    }
    cout << "Tong cac gia tri duong la: " << S;

    return 0;
}