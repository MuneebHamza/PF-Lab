#include<iostream>
using namespace std;

 main () {

   float Q,t;
   cout<<"Enter the charge (Q) in Coulombs: ";
   cin>>Q;
   cout<<"Enter the time (t) in seconds: ";
   cin>>t;
   float I=Q/t;
   cout<<"The current (I) is = "<<I<<" Amperes";

}