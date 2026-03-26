#include<iostream>
using namespace std;
main () {
    string word;
    cout<<"Enter a string: ";
    getline(cin, word);
    cout<<" Shifted String: ";
    for(int i=0; word[i]!='\0'; i++){
        char next;
        if(word[i]==' '){
            next=word[i];
        }
        else if(word[i]=='Z'){
            cout<<"A";
        }
        else if(word[i]=='z'){
            cout<<"a";
        }
        else{
        next=word[i]+1;
        
        }
        cout<<next;
    }
}