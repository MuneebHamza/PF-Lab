#include<iostream>
using namespace std;
int main(){
    char vowels[5]={'a','e','i','o','u'};
    string user;
    cout<<"Enter a string: ";
    getline(cin, user);
    cout<<"String with vowels removed: ";
    for(int i=0; user[i]!='\0'; i++){
        if(user[i]=='a' || user[i]=='e' || user[i]=='i' || user[i]=='o' || user[i]=='u'||
           user[i]=='A' || user[i]=='E' || user[i]=='I' || user[i]=='O' || user[i]=='U' ){
            continue;
        }
        else{
            cout<<user[i];
        }
    }
    return 0;
}