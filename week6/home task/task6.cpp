#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter number of students: ";
    cin>>num;
    string students[num];
    cout<<"Enter the names of "<<num<<" students: "<<endl;
    for(int i=0; i<num; i++){   
        cin>>students[i];
    }
    cout<<"Students in alphabetical order: "<<endl;
    for(int i=0; i<num; i++){
        for(int j=i+1; j<num; j++){
            if(students[i]>students[j]){
            string temp=students[i];
            students[i]=students[j];
            students[j]=temp;
            }   
        }     
    }
    for(int i=0; i<num; i++){
        cout<<students[i]<<endl;
    }
    return 0;
}