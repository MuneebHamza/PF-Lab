#include<iostream>
using namespace std;
main () {
    int number;
    cout<<"Enter a number :";
    cin>>number;
    int sum=0;
    int digit;
    for(int i=number; i>0; i=i/10){
        digit=i%10;
        sum=sum+digit;
    }
    cout<<"Sum of digits : "<<sum<<endl;
}