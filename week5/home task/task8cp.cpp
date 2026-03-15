#include<iostream>
using namespace std;
main () {
    int age;
    cout<<"Enter Lily's age: ";
    cin>>age;
    int price;
    cout<<"Enter price of washing machine: ";
    cin>>price;
    int unit;
    cout<<"Enter the unit price of each toy: ";
    cin>>unit;
    int count=0;
    int money=0;
    int gift=10;
    for(int i=1; i<=age; i++){
        if(i%2==0){
            money+=gift-1;
            gift+=10; 
        }
        else{
            count++;
        }
    }
    int total;
    total=(count*unit)+money;
    if(total>=price){
        cout<<"Yes!"<<endl;
        int total_sub;
        total_sub=total-price;
        cout<<total_sub<<endl;
    }
    else if(total<price){
        cout<<"No!"<<endl;
        int total_sub;
        total_sub=price-total;
        cout<<total_sub<<endl;
    }
}