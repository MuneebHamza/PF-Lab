#include<iostream>
using namespace std;
main () {
    for(int i=1; i<=10; i++){
        for(int space=1; space<=10-i; space++){
            cout<<" ";
        }
         for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
