#include<iostream>
using namespace std;
int main (){
    int arr[4];
    int coin[4]={25,10,5,1};
    int multiply=0,sum=0;
    cout<<"Enter Quarters: ";
    cin>>arr[0];
    cout<<"Enter Dimes: ";
    cin>>arr[1];
    cout<<"Enter nickels: ";
    cin>>arr[2];
    cout<<"Enter pennies: ";
    cin>>arr[3];
    for(int i=0; i<4; i++){
        multiply=arr[i]*coin[i];
        sum=sum+multiply;
    }
    float due;
    cout<<"Enter the total amout due: $";
    cin>>due;
    int dueincents=(due*100)+0.5;
    cout<<"Can you pay the amount? ";
    if(dueincents<=sum){
        cout<<"yes."<<endl;
    }
    else{
        cout<<"No."<<endl;
    }
    return 0;
}