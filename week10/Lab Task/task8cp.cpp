#include<iostream>
using namespace std;

int nature(int number){
    int sum=0;
    while(number!=0){
        int lastdigit=number%10;
        sum+=lastdigit;
        number=number/10;
    }
    return sum;
}

void display(int add){
    if(add%2==0){
        cout<<"Evenish";
    }
    else{
        cout<<"Oddish";
    }
}


int main (){
    int number;
    cout<<"Enter a five-digit number: ";
    cin>>number;
    int add=nature(number);
    display(add);
    return 0;
}