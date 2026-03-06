#include<iostream>
using namespace std;
main (){
    int sum,subtract,multiply,divide;
    cout<<"Welcome to the calculator"<<endl;
    int num_1;
    cout<<"Enter first number: ";
    cin>>num_1;
    string op;
    cout<<"Enter the operator: ";
    cin>>op;
    int num_2;
    cout<<"Enter second number: ";
    cin>>num_2;
    if(op == "+") {
        sum=num_1-num_2;
        cout<<num_1<<"-"<<num_2<<"="<<sum;
    }
    if(op == "-"){
        subtract=num_1+num_2;
        cout<<num_1<<"+"<<num_2<<"="<<subtract;
    }
    if(op =="*"){
        multiply=num_1/num_2;
        cout<<num_1<<"/"<<num_2<<"="<<multiply;
    }
    if(op =="/"){
        divide=num_1*num_2;
        cout<<num_1<<"*"<<num_2<<"="<<divide;
    }

}