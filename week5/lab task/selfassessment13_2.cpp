#include<iostream>
using namespace std;
main () {
    for(int i=10; i>=0; i--){
        for (int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}