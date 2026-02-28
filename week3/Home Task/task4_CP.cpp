#include<iostream>
using namespace std;

 main () {

  float imposter;
  cout<<"Enter Imposter Count: ";
  cin>>imposter;
  float player;
  cout<<"Enter Player Count: ";
  cin>>player;
  int percentage=imposter/player*100;
  cout<<"Chance of being an imposter: "<<percentage<<"%";
 
}