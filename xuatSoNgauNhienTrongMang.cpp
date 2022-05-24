#include <bits/stdc++.h>
using namespace std;

#define MAX 5
int main()
{
    int arr[MAX];
    srand(time(NULL));
    for (int i = 1; i < MAX; i++)
    {
        arr[i] = rand();
    }
    for (int i = 1; i < MAX; i++)
    {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }

    return 0;
}