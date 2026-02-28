#include<iostream>
using namespace std;

 main () {

    int population;
    cout<<"Enter the current world population: ";
    cin>>population;
    int births;
    cout<<"Enter the monthly birth rate (number of births per month): ";
    cin>>births;
    int decade=population+(births*360);
    cout<<"Population in three decades will be: "<<decade;

}

 
   