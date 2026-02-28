#include<iostream>
using namespace std;

 main () {

  int age;
  cout<<"Enter the person's age: ";
  cin>>age;
  int move;
  cout<<"Enter the number of times they've moved: ";
  cin>>move;
  int average=age/(move+1);
  cout<<"Average number of years lived in the same house: "<<average;

}