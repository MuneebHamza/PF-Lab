#include<iostream>
using namespace std;
main () {
    string grade;
    int arr_size=130;
    float stu[arr_size];
    for(int i=0; i<arr_size; i++){
        cout<<"Enter "<<i+1<<" Student Marks: ";
        cin>>stu[i];
        if(stu[i]>=15){
          grade="Passed";
        }
        else{
            grade="Failed";
        }
        cout<<grade<<endl; 
    }
    
        
}


