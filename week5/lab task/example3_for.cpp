#include<iostream>
using namespace std;
main () {
    int num;
    int num1=0;
    int num2=1;
    int next;
    cout<<"Enter that how many numbers you want to print: ";
    cin>>num;
    cout<<num1<<","<<num2;
    for(int i=1; i<num-1; i++){
        next=num1+num2;
        cout<<","<<next;
        num1=num2;
        num2=next;
    }
}