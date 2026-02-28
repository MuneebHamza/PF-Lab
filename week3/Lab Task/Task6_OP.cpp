#include<iostream>
using namespace std;

 main () {

  double mb;
  cout<<"Enter the size in megabytes (MB): ";
  cin>>mb;
  double bits=mb*1024*1024*8;
  cout<<mb<<" MB is equivalent to "<<bits<<" bits";
 
}