#include<iostream>
using namespace std;
main (){
    char choice;
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
    while(choice!='n'){
        cout<<"I'm Happy!"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;
    }
}