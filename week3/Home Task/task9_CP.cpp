#include<iostream>
using namespace std;

 main () {

 int number;
 cout<<"Enter a 4-digit number: ";
 cin>>number;
 int sum=0;
 int digit1;
 digit1=number % 10;
 sum=sum+digit1;
 number=number / 10;
 int digit2;
 digit2=number % 10;
 sum=sum+digit2;
 number=number / 10;
 int digit3;
 digit3=number % 10;
 sum=sum+digit3;
 number=number / 10;
 int digit4;
 digit4=number % 10;
 sum=sum+digit4;
 cout<<"Sum of the individual digits: "<<sum;

}
  