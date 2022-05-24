#include <bits/stdc++.h>
using namespace std;

int main()
{
    bool check = true;
    int arr[5] = {1, 5, 3, 8, 9};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << "So chan lon nhat dau tien la: " << arr[i];
            check = false;
            break;
        }
    }
    if (check == true)
    {
        cout << "-1";
    }

    return 0;
}