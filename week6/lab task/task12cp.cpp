#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    bool found=false;
    int arr[size];
    cout<<"Enter "<<size<<" elements of the array: "<<endl;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    for(int i=0; i<size; i=i+2){
        if(arr[i]%2!=0){
            found=true;
        }
    }
    if(found==true){
        cout<<"The array is not special."<<endl;
    }
    else{
        cout<<"The array is  special."<<endl;
    }
}