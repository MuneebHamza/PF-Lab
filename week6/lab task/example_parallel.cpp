#include<iostream>
using namespace std;
main () {
    string name[100];
    int roll_number[100];
    float GPA[100];
    int count;
    cout<<"How many records you want to enter: ";
    cin>>count;
    for(int i=0; i<count; i++){
        cout<<"Name: ";
        cin>>name[i];
        cout<<"Roll Number: ";
        cin>>roll_number[i];
        cout<<"GPA: ";
        cin>>GPA[i];
    }
    cout<<" Name "<< " \t " <<" ID "<<" \t "<<" GPA "<<endl;
    for(int i=0; i<count; i++){
        cout<<name[i]<<" \t "<<roll_number[i]<<" \t "<<GPA[i]<<endl;
    }
     
} 