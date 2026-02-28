#include<iostream>
using namespace std;

 main () {
      string name;
      cout<<"Enter the student's name: ";
      cin>>name;
      float matric;
      cout<<"Enter matriculation marks (out of 1100): ";
      cin>>matric;
      float inter;
      cout<<"Enter intermediate marks (out of 550): ";
      cin>>inter;
      float ECAT;
      cout<<"Enter ECAT Marks (out of 400): ";
      cin>>ECAT;
      float aggregate=(ECAT/400)*50+(inter/550)*40+(matric/1100)*10;
      cout<<"Aggregate score for Rehman is"<<aggregate<<"%";


}