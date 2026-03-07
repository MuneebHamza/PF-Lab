#include<iostream>
using namespace std;
main () {
   int num_1,num_2;
   cout<<"Enter the first number: ";
   cin>>num_1;
   cout<<"Enter the second number: ";
   cin>>num_2;
   if(num_1 > num_2){
    cout<<num_1<<" is greater than "<<num_2;
   }
   else {
    cout<<num_2<< " greater than "<<num_1;
   }
}