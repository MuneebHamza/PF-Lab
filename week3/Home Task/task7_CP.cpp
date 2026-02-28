#include<iostream>
using namespace std;
  main () {

  string movie;
  int adult_T,child_T;
  int number_AT,number_CT;
  float percentage;
  cout<<"Enter the movie name: ";
  cin>>movie;
  cout<<"Enter the adult ticket price: $";
  cin>>adult_T;
  cout<<"Enter the child ticket price: $";
  cin>>child_T;
  cout<<"Enter the number of adult tickets sold: ";
  cin>>number_AT;
  cout<<"Enter the number of child tickets sold: ";
  cin>>number_CT;
  cout<<"Enter the percentage of amount to be donated to charity: ";
  cin>>percentage;
  cout<<"---------------------------------"<<endl;
  cout<<"Movie: "<<movie<<endl;
  float total=(adult_T*number_AT)+(child_T*number_CT);
  cout<<"Total Amount Generated from ticket sales: $"<<total<<endl;
  float charity=(percentage/100)*total;
  cout<<"Donation to Charity("<<percentage<<"): $"<<charity<<endl;
  int remaining=total-charity;
  cout<<"Remaining amount after donation: $"<<remaining<<endl;

}