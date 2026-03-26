#include<iostream>
using namespace std;
main (){
    int size=5;
    int number[size];
    for(int i=0; i<5; i++){
        cout<<"Enter Number: ";
        cin>>number[i];
    }
    cout<<"The first element in array: "<<number[0]<<endl;
    cout<<"The last element in array: "<<number[4]<<endl;
}