#include<iostream>
using namespace std;
main () {
    int number,digit;
    cout<<"Enter a number: ";
    cin>>number;
    cout<<"Enter digit: ";
    cin>>digit;
    int count=0;
    for(int i=number; i>0; i=i/10){
        if(i%10==digit){
            count++;
        }
    }
    cout<<"The frequency of "<<digit<<" is :"<<count<<endl;
}