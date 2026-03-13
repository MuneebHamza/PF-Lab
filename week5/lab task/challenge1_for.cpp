#include<iostream>
using namespace std;
main () {
    int num1=24;
    int multiple;
    cout<<"Multiplication table of "<<num1<<": "<<endl;
    for(int i=1; i<=10; i++){
        multiple=num1*i;
        cout<<num1<<" x "<<i<<" = "<<multiple<<endl;

    }
    cout<<endl;
    int num2=50;
    cout<<"Multiplication table of "<<num2<<": "<<endl;
    for(int i=1; i<=10; i++){
        multiple=num2*i;
        cout<<num2<<" x "<<i<<" = "<<multiple<<endl;
    }
      cout<<endl;
      int num3=29;
    cout<<"Multiplication table of "<<num3<<": "<<endl;
    for(int i=1; i<=10; i++){
        multiple=num3*i;
        cout<<num3<<" x "<<i<<" = "<<multiple<<endl;
    }
    cout<<endl;
}