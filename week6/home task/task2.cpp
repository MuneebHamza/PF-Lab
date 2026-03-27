#include<iostream>
using namespace std;
int main() {
    int num;
    cout<<"Enter number of elements: ";
    cin>>num;
    cout<<"Enter "<<num<<" numbers: "<<endl;
    int number[num];
    int count=0;
    for(int i=0; i<num; i++){
        cin>>number[i];
    }
    for(int i=0; i<num; i++){
        if(number[i]%2!=0){
            continue;
        }
        else{
            count++;
        }
    }
    cout<<"Total Even numbers: "<<count<<endl;
    return 0;
}