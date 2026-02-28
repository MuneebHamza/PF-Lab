#include<iostream>
using namespace std;

 main () {

  string name;
  cout<<"Enter the Name of the Person: ";
  cin>>name;
  float weight;
  cout<<"Enter the target weight loss in kilograms: ";
  cin>>weight;
  float days=weight*15;
  cout<<name<<" will need "<<days<<" days to lose "<<weight<<" kg of weight by following the doctor's suggestions";

}