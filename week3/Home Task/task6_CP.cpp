#include<iostream>
using namespace std;

  main () {

   float weight,cost,size;
   cout<<"Enter the size of the fertilizer bag in pounds: ";
   cin>>weight,
   cout<<"Enter the cost of the bag: $";
   cin>>cost;
   cout<<"Enter the area in square feet that can be covered by the bag: ";
   cin>>size;
   float price=cost/weight;
   float square=cost/size;
   cout<<"Cost of fertilizer per pound: $"<<price<<endl;
   cout<<"Cost of fertilizer per square foot: $"<<square;
   

}