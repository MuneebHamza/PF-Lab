#include<iostream>
using namespace std;
main (){
    int num1,num2,a,b,temp,gcd,lcm;
    cout<<"Enter first number: ";
    cin>>num1;
    cout<<"Enter second number: ";
    cin>>num2;
    a=num1;
    b=num2;  
    while(b!=0){
        temp=b;
        b=a%b;
        a=temp;
        gcd=a;
    }
    lcm=(num1*num2)/gcd;
    cout<<"GCD of "<<num1<<" and "<<num2<<" is: "<<gcd<<endl;
    cout<<"LCM of "<<num1<<" and "<<num2<<" is: "<<lcm;


}