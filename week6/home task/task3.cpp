#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter number of elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" numbers: "<<endl;
    int number[num];
    for(int i=0; i<num; i++){
        cin>>number[i];
    }
    int largest=number[0];
    int smallest=number[0];
    for(int i=0; i<num; i++){
        if(number[i]>largest){
            largest=number[i];
        }
        if(number[i]<smallest){
            smallest=number[i];
        }
    }
    cout<<"Largest: "<<largest<<endl;
    cout<<"Smallest: "<<smallest<<endl;
    return 0;
}