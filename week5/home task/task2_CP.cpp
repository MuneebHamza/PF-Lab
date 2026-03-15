#include<iostream>
using namespace std;
main () {
    int num1=0;
    int num2=1;
    int num;
    cout<<"Enter a number :";
    cin>>num;
    if(num>=1){
        cout<<num1;
    }
    if(num>=2){
    cout<<","<<num2;
    }
    int next;
    for(int i=1; i<=num-2; i++){
        next=num1+num2;
        cout<<","<<next;
        num1=num2;
        num2=next;
    }  
}