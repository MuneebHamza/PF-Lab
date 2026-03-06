#include<iostream>
using namespace std;
main () {
    string name_1,name_2,name_3;
    int age_1,age_2,age_3;
    cout<<"Enter name of first brother: ";
    cin>>name_1;
    cout<<"Enter age of first brother: ";
    cin>>age_1;
    cout<<"Enter name of second brother: ";
    cin>>name_2;
    cout<<"Enter age of second brother: ";
    cin>>age_2;
    cout<<"Enter name of third brother: ";
    cin>>name_3;
    cout<<"Enter age of third brother: ";
    cin>>age_3;
    if (age_1 < age_2){
        if(age_1 < age_3){
            cout<<name_1<<" is youngest.";
        }
    }
    if (age_2 < age_1){
        if(age_2 < age_3){
            cout<<name_2<<" is youngest.";
        }
    }
    if (age_3 < age_1){
        if (age_3 < age_2){
            cout<<name_3<< "is youngest.";
        }
    }
    

}