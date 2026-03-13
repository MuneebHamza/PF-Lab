#include<iostream>
using namespace std;
main () {
    int extra=1;
    for(int i=10; i>=1; i--){
        for(int space=1; space<=i; space++){
            cout<<" ";
        }
         for (int j=1; j<=extra; j++){
            cout<<"*";
        }
        extra++;
        cout<<endl;
    }
}
