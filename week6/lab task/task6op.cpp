#include<iostream>
using namespace std;
int main(){
    int user;
    cout<<"Enter the number of elements: ";
    cin>>user;
    int number[user];
    cout<<"Enter "<<user<<" numbrs,one per line: "<<endl;
    for(int i=0; i<user; i++){
        cin>>number[i];
    }
    int largest=number[0];
    for(int i=1; i<user; i++){
        if(number[i]>largest){
            largest=number[i];
        }
    }
    cout<<"The largest number entered is: "<<largest;
    return 0;
}