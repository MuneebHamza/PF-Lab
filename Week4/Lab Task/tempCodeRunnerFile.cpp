#include<iostream>
using namespace std;
main (){
    float bill;
    float dis_bill;
    int total;
    cout<<"Enter your bill: ";
    cin>>bill;
    if (bill <= 5000 ){
       dis_bill=bill*0.05;
    }
     else {
        dis_bill=bill*0.10;
    }
    total=bill-dis_bill+0.5;
  cout<<"Your discounted bill is: "<<total;
}