#include <bits/stdc++.h>
using namespace std;

const string ID("lekimquang");
const string PASS("Quang2312tp+");

int main()
{
    system("cls");
    string id, pass;
    do
    {
        cout << "ID: ";
        getline(cin, id);
        cout << "PASS: ";
        getline(cin, pass);
    } while (PASS != pass || ID != id);
    cout << "Login succeed!" << endl;

    return 0;
}