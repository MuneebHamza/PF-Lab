#include<iostream>
using namespace std;
main () {
    int number;
    int digit=0;
    cout<<"Enter a number: ";
    cin>>number;
    for(int i=number; i>0; i=i /10){
        digit+=1;

    }
    cout<<"Total number of digits: "<<digit<<endl;
}