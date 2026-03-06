#include<iostream>
using namespace std;
main (){
    string country;
    int ticket;
    float discount;
    int total;
    cout<<"Country: ";
    cin>>country;
    cout<<"Ticket Price: ";
    cin>>ticket;
    if(country=="Ireland"){
        discount=ticket*0.10;
        total=ticket-discount;
        cout<<"Discounted Price: "<<total;
    }
    else{
        discount=ticket*0.05;
        total=ticket-discount;
        cout<<"Discounted Price: "<<total;
    }
}