#include <bits/stdc++.h>
using namespace std;

int main()
{
    float arr[4] = {4.5, -1.4, 5.8, -7.5};
    for (auto item : arr)
    {
        cout << item << endl;
    }
    float max = arr[0];
    float min = arr[0];
    for (int i = 0; i < 4; i++)
    {
        max = (arr[i] > max) ? arr[i] : max;
        min = (arr[i] < min) ? arr[i] : min;
    }
    cout << "[" << min << "," << max << "] chua tat ca cac gia tri trong mang.";

    return 0;
}