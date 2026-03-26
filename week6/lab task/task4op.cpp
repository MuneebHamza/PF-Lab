#include<iostream>
using namespace std;
int main () {
    int user;
    cout<<"Enter the number of elemetns: ";
    cin>>user;
    if(user<=0){
        cout<<"Invalid input.Number of elements must be greater than 0."<<endl;
        return 0;
    }
    int number[user];
    cout<<"Enter "<<user<<" numbers, one per line: "<<endl;
    for(int  i=0; i<user; i++){
        cin>>number[i];
    }
    cout<<"Number in Reverse order: ";
    for(int i=user-1; i>=0; i--){
        cout<<number[i]<<" ";
    }
    return 0;
}