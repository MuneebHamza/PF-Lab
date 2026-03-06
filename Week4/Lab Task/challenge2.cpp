#include<iostream>
using namespace std;
main (){
    int salary=10000;
    int laptop=50000;
    float advance=(10000*6)*50/100;
    if (advance >= 50000)
    cout<<"Buy the Laptop";
    else {
        int req_month;
        req_month=laptop/(salary*0.50);
        cout<<"Month required to buy laptop: "<<req_month;
    }
    
    
}