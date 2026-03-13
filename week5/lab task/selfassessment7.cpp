#include<iostream>
using namespace std;
main () {
    string name;
    while(true){
        cout<<"Enter your name: ";
        cin>>name;
        if(name=="End"){
            cout<<"End";
            break;
        }
        cout<<"Hello "<<name<<endl;
    }
}