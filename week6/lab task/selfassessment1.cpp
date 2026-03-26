#include<iostream>
using namespace std;
main () {
    int num=5;
    int number[num];
    for(int i=0; i<num; i++){
        cout<<"Enter a number: ";
        cin>>number[i];
    }
    int largest=number[0];
    for(int i=1; i<5; i++){
        if(number[i]>largest){ 
            largest=number[i];
        }
    }
    cout<<"Large number is "<<largest;
    
}