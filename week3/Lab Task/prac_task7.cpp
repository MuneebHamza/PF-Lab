#include<iostream>
using namespace std;

 main () {

    int area;
    cout<<"Enter paint area: ";
    cin>>area;
    int width;
    cout<<"Enter width: ";
    cin>> width;
    int height;
    cout<<"Enter height: ";
    cin>>height;
    int paint=area/(width*height);
    cout<<"Walls painted: "<<paint;
    
}