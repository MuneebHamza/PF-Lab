#include<iostream>
using namespace std;
main () {
    string fig;
    float size,area,length_r,length_t,width,radius,height;
    float pi=3.14;
    cin>>fig;
    if(fig=="Square"){
       cin>>size;
       area=size*size;
    }
    if(fig=="Rectangle"){
        cin>>length_r>>width;
        area=length_r*width;
    }
    if(fig=="Circle"){
        cin>>radius;
        area=pi*radius*radius;
    }
    if(fig=="triangle"){
       cin>>length_t>>height;
       area=0.5*length_t*height;
    }
    cout<<area;
}