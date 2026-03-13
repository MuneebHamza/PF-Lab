#include<iostream>
using namespace std;
main() {
    int number;
    int sum=0;
    while(number>=0){
        cout<<"Enter number :";
        cin>>number;
        sum+=number;
    }
    cout<<"Sum of the numbers is: "<<sum<<endl;
}