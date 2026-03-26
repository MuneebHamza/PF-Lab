#include<iostream>
using namespace std;
main () {
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    char letter;
    cout<<"Enter letter you want to find: ";
    cin>>letter;
    bool isfound=false;
    int i;
    for( i=0; word[i]!='\0'; i++){
        if(letter==word[i]){
            isfound=true;
            break;
        }
    }
    if(isfound==true){
        cout<<letter<<" is found."<<endl;
    }
    else{
        cout<<letter<<" is not found."<<endl;
    }
}