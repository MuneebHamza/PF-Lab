#include<iostream>
using namespace std;
main () {
    int number;
    int multiple;
    cout<<"Enter a number :";
    cin>>number;
    for(int i=1; i<=10; i++){
        multiple=number*i;
        cout<<number<<" x "<<i<<" = "<<multiple<<endl;
    }
}