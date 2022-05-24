#include <bits/stdc++.h>
using namespace std;

int main()
{
    float max;
    bool check = true;
    float arr[4] = {3.5, 4.6, 9.8, 1.2};
    for (auto item : arr)
    {
        cout << item << endl;
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < 0)
        {
            max = arr[i];
            check = false;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] < 0 && arr[i] < max)
        {
            max = arr[i];
        }
    }
    if (check == false)
    {
        cout << max;
    }
    else
    {
        cout << "-1";
    }

    return 0;
}