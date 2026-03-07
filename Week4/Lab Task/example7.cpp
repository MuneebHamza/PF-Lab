#include<iostream>
using namespace std;
main () {
    int number;
    cout<<"Please Enter the number: ";
    cin>>number;
    int even=number%2;
    if(even==0){
        cout<<"The number is even.";
    }
    else{
        cout<<"The number is odd.";
    }
}