#include<iostream>
using namespace std;
main () {
    int number;
    int digit;
    cout << "Enter a number: ";
    cin >> number;
    cout << "Enter the digit to check: ";
    cin >> digit;
    int count=0;
    for(int i=number; i>0; i=i/10){
        if(i%10==digit){
            count++;
        }
    }
    cout<<"Frequency : "<<count<<endl;
}