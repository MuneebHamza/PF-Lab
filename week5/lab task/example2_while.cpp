#include<iostream>
using namespace std;
main () {
    int number;
    cout<<"Enter a positive number: ";
    cin>>number;
    while(number <=0){
        cout<<"Error! Please enter a positive number.";
        cin>>number;
    }
    cout<<"Program Ends"<<endl;
}