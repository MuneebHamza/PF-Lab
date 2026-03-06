#include<iostream>
using namespace std;
main (){
    int temp_1,temp_2;
    int differ;
    cout<<"Temperature City 1: ";
    cin>>temp_1;
    cout<<"Temperature City 2: ";
    cin>>temp_2;
    differ=temp_1-temp_2;
    if(differ > 10){
        cout<<"Difference is too Big"<<endl;
        cout<<"Program Ends";

    }
    else{
        cout<<"Program Ends";
    }

}