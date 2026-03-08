#include<iostream>
using namespace std;
main () {
    int speed;
    cout<<"Speed: ";
    cin>>speed;
    if(speed >0)
      if(speed <=10){
            cout<<"Slow";
        
    }
    if(speed > 10 )
       if( speed <=50){
    
            cout<<"Average";
        
    }
    if(speed > 50 )
       if(speed <=150){

            cout<<"Fast";
        
    }
    if(speed > 150)
      if( speed <=1000){
        
            cout<<"Ultra fast";
        
    }
    if(speed > 1000){
        cout<<"Extremely fast";
    }
    
}