#include<iostream>
using namespace std;
int main () {
    int user;
    cout<<"Enter the number of elemetns: ";
    cin>>user;
    int number[user];
    int count=0;
    cout<<"Enter "<<user<<" numbers, one per line: "<<endl;
    int i;
    for(  i=0; i<user; i++){
        int input;
        cin>>input;
    bool found=false;
        for(int j=0; j<count; j++){
            if(input==number[j]){
                cout<<"Already Entered: "<<input<<endl;
                found=true;
                break;
            }
        }
        if(found==false){
            number[count]=input;
            count++;
        }
    }
    cout<<"Unique numbers Entered: ";
    for(int i=0; i<count; i++){
        cout<<number[i];
        if(i<count-1){
            cout<<",";
        }
    }
    return 0;
}