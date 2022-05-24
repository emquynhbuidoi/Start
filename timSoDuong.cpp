#include <bits/stdc++.h>
using namespace std;

int main()
{
    float last;
    bool check = true;
    float arr[5] = {-5.7, -4.5, -1.4, 7.9, -5.6};
    for (const auto &item : arr)
    {
        cout << item << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] >= 0)
        {
            last = arr[i];
            check = false;
        }
    }
    if (check == false)
    {
        cout << last;
    }
    if (check == true)
    {
        cout << endl
             << "-1";
    }
    return 0;
}