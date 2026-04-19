#include<iostream>
using namespace std;

int reverse(int number){
    int reversednumber=0;
    while(number!=0){
        int lastdigit=number%10;
        reversednumber=reversednumber*10+lastdigit;
        number=number/10;
    }
    return reversednumber;
}

void symmetric(int number){
    if(number==reverse(number)){
        cout<<"The number is symmetric."<<endl;
    }
    else{
        cout<<"The number is not symmetric."<<endl;
    }
}

int main (){
    int number;
    cout<<"Enter a three-digit number: ";
    cin>>number; 
    int reversednumber=reverse(number); 
    symmetric(number);
    return 0;  
}