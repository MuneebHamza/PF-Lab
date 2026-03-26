#include<iostream>
using namespace std;
main (){
    int number[100];
    int user;
    cout<<"How many number you want to enter: ";
    cin>>user;
    for(int i=0; i<user; i++){
        cout<<"Enter Number: ";
        cin>>number[i];
    }
    for(int i=0; i<user; i++){
        cout<<number[i]<<endl;
    }
}