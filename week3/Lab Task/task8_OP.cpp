#include<iostream>
using namespace std;

 main () {

  float voltage;
  cout<<"Enter Voltage (in volts): ";
  cin>>voltage;
  float current;
  cout<<"Enter Current (in Amperes): ";
  cin>>current;
  float power=voltage*current;
  cout<<"The power is "<<power<<" watts";

}