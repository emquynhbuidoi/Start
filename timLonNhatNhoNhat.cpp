#include <bits/stdc++.h>
using namespace std;

#define limit 5
int main()
{
    float arr[limit] = {4.6, 4.3, 2.4, 6.8, 1.3};
    for (auto item : arr)
    {
        cout << item << endl;
    }
    float max = arr[0];
    for (int i = 0; i < limit; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    float min = arr[0];
    for (int i = 0; i < limit; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << "Max= " << max << endl;
    cout << "Min= " << min << endl;
}