#include<iostream>
using namespace std;
int main(){
    int user;
    cout<<"Enter the number of resistors in the series circuit: ";
    cin>>user;
    cout<<"Enter the resistance values (in ohms) of the "<<user<<" resistors, one per line: "<<endl;
    float resistor[user];
    float sum=0;
    for(int i=0; i<user; i++){
        cin>>resistor[i];
        sum=sum+resistor[i];
    }
  cout<<"The total resistance of the series circuit is "<<sum<<" ohms.";
  return 0;
}