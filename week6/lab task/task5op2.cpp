#include<iostream>
using namespace std;
int main () {
    int user;
    cout<<"Enter the number of elemetns: ";
    cin>>user;
    int number[user];
    cout<<"Enter "<<user<<" numbers, one per line: "<<endl;
    bool isfound=false;
    int i;
    for(  i=0; i<user; i++){
        cin>>number[i];
    }
    for( i=0; i<user; i++){
        for(int j=i+1; j<user; j++){
            if(number[i]==number[j]){
                isfound=true;
                break;
            }
        }
    }
    if(isfound==true){
        cout<<"Already Entered";
    }    
}