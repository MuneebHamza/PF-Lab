#include<iostream>
using namespace std;
main (){
    string word;
    char letter;
    int i;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Enter a letter: ";
    cin>>letter;
    bool isfound=false;
    for(i=0; word[i] !='\0'; i++){
        if(letter==word[i])
        isfound=true;

    }
    if(isfound==true){
        cout<<letter<<" is found."<<endl;
    }
    else{
        cout<<"Not Found."<<endl;
    }
}