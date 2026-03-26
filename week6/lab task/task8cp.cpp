#include<iostream>
using namespace std;
int main(){
    int user_1;
    cout<<"Enter the number of elements for the first array (must be 2): ";
    cin>>user_1;
    int arr1[user_1];
    for(int i=0; i<user_1; i++){
        cin>>arr1[i];
    }
    int user_2;
    cout<<"Enter the number of elements for the second array: ";
    cin>>user_2;
    int arr2[user_2];
    for(int i=0; i<user_2; i++){
        cin>>arr2[i];
    }
    cout<<"["<<arr1[0]<<",";
    for(int i=0; i<user_2; i++){
        cout<<arr2[i]<<",";
    }
    cout<<arr1[1]<<"]";
    return 0;
}