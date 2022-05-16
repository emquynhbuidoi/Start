#include <iostream>
using namespace std;

int main(){
    int numBer;

    cout<<"Enter a number: ";
    cin>>numBer;
    if(numBer % 2 != 0){
        cout<<numBer<<" is odd"<<endl;
        if(numBer % 5 == 0){
            cout<<numBer<<" divisible by 5";
        } else {
            cout<<numBer<<" not divisible by 5";
        }
    } else {
        cout<<numBer<<" is an even number";
    }
    return 0;
}