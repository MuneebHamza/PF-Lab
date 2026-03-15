#include<iostream>
using namespace std;
main () {
    int num;
    int count=0;
    cout<<"Enter a number :";
    cin>>num;
    if(num==0){
        count=1;
    }
    else{
    for(int i=num; i<0 || i>0; i=i/10){
        count++;
    }
}
    cout<<"Total number of digits :"<<count;
}