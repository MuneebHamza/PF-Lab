#include<iostream>
using namespace std;
main () {
    int number1,number2;
    int a,b,temp,gcd,lcm;
    cout<<"Enter the first number :";
    cin>>number1;
    cout<<"Enter the second number :";
    cin>>number2;
    a=number1;
    b=number2;
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
        gcd=a;
    }
    lcm=(number1*number2)/gcd;
    cout<<"GCD : "<<gcd<<endl;
    cout<<"LCM : "<<lcm<<endl;
}