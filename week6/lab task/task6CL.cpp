#include<iostream>
using namespace std;
main () {
    int number[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0; i<5; i++){
    sum=sum+number[i];
    }
    float average=sum/5;
    cout<<"Sum: "<<sum<<endl;
    cout<<"Average: "<<average<<endl;
}