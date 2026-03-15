#include<iostream>
using namespace std;
main (){
    int num;
    int sum=0;
    cout<<"Enter a number: ";
    cin>>num;
    while(num>=0){
        sum+=num;
        cout<<"Enter a number: ";
        cin>>num;
    }
    cout<<"Sum of the numbers is: "<<sum;
}