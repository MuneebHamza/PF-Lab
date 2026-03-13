#include<iostream>
using namespace std;
main () {
    int num=5;
    int num2=8;
    cout<<num<< ","<<num2<<",";
    int next;
    for(int i=0; i<5; i++){
        next=num+num2;
        cout<<next<<",";
        num=num2;
        num2=next;
    }
}