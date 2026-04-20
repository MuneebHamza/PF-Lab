#include<iostream>
using namespace std;

float interest(float balance, int years){
    float tinterest=0;
    if(balance>50000){
         tinterest=balance*0.10;
    }
    else if(balance>=10000){
         tinterest=balance*0.07;
    }
    else{
         tinterest=balance*0.05;
    }
    if(years>=3){
        tinterest += (balance*0.02);
    }
    return tinterest+balance;
}   

void printinterest(float total, float balance){
    cout<<"Updated Balance: "<<total;
}

int main (){
    float balance;
    int years;
    cout<<"Enter balance and years: ";
    cin>>balance>>years;
    float total=interest(balance, years);
    printinterest(total, balance);
    return 0;
}