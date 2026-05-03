#include<iostream>
using namespace std;

bool palindromic(string str){
    string str2;
    for(int i=str.length()-1; i>=0; i--){
        str2+=str[i];
    }
    if(str==str2){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    string str;
    cout<<"Enter a string: ";
    cin>>str;
    if(palindromic(str)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
}