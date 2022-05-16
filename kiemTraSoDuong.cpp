#include <iostream>
using namespace std;

int main(){
    int Number;

    cout<<"Enter a number: ";
    cin>>Number;
    if(Number > 0){
        cout<<Number<<" is a positive number";
    } else {
        cout<<Number<<" is a negative number";
    }
    return 0;
}