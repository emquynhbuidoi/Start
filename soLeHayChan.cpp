#include <iostream>
using namespace std;

int main(){
    int numBer;
    cout<<"Number: ";
    cin>>numBer;
    if(numBer % 2 == 0){
        cout<<numBer<<" la so chan";
    } else {
        cout<<numBer<<" la so le";
    }
    return 0;
}