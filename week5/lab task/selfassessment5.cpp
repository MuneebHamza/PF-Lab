#include<iostream>
using namespace std;
main() {
    int number;
    int sum=0;
    for(int i=0; i<5; i++){
        cout<<"Enter number :";
        cin>>number;
        sum+=number;
    }
    cout<<"Sum of the numbers is: "<<sum<<endl;
}