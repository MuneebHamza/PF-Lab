#include<iostream>
using namespace std;

 main () {

  int initial_v;
  cout<<"Enter Initial Velocity (m/s): ";
  cin>>initial_v;
  int acceleration;
  cout<<"Enter Acceleration (m/s^2): ";
  cin>>acceleration;
  int time;
  cout<<"Enter Time (s): ";
  cin>>time;
  int final_v=(acceleration*time)+initial_v;
  cout<<"Final velocity (m/s): "<<final_v;


}