#include<iostream>
using namespace std;
main () {
    int number,digit;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter digit: ";
    cin>>digit;
    int count=0;
    for(; number>0; number=number/10){
        if(number%10==digit){
            count++;
        }
    }
    cout<<"The frequency of "<<digit<<" is :"<<count<<endl;
}