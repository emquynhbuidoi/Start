#include <bits/stdc++.h>
using namespace std;

int main()
{
    float arr[4] = {1.2, -2.3, 3.4, -4.5};
    for (auto item : arr)
    {
        cout << item << endl;
    }
    float max = arr[0];
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "[-" << max << "," << max << "] chua tat ca cac gia tri trong mang.";

    return 0;
}