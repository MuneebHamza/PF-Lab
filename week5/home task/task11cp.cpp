#include<iostream>
using namespace std;
main () {
    while(true){
         cout<<endl<<" --- Simple Calculator --- "<<endl;
         cout<<"1. Addition"<<endl;
         cout<<"2. Subtraction"<<endl;
         cout<<"3. Multiplication"<<endl; 
         cout<<"4. Division"<<endl;
         cout<<"5. Clear Screen"<<endl;
         cout<<"6. Exit"<<endl;
         int choice;
         float num1,num2,result;
         cout<<"Enter your choice (1-6): ";
         cin>>choice;
         if(choice==1){
            cout<<"Enter first number: ";
         cin>>num1;
         cout<<"Enter second number: ";
         cin>>num2;
            result=num1+num2;
            cout<<"Result: "<<result<<endl;
         }
         else if(choice==2){
            cout<<"Enter first number: ";
         cin>>num1;
         cout<<"Enter second number: ";
         cin>>num2;
            result=num1-num2;
            cout<<"Result: "<<result<<endl;
         }
         else if(choice==3){
            cout<<"Enter first number: ";
         cin>>num1;
         cout<<"Enter second number: ";
         cin>>num2;
            result=num1*num2;
            cout<<"Result: "<<result<<endl;
         }
         else if(choice==4){
            cout<<"Enter first number: ";
         cin>>num1;
         cout<<"Enter second number: ";
         cin>>num2;
         if(num2==0){
            cout<<"Syntax Error!"<<endl;
         }
         else{
            result=num1/num2;
            cout<<"Result: "<<result<<endl;
         }
         }
         else if(choice==5){
            cout<<"Screen Cleared."<<endl;
         }
         else if(choice==6){
            cout<<"Program End. Thank you for using calculator."<<endl;
            break;
         }
         else{
            cout<<"Invalid Choice."<<endl;
         }
    }

}