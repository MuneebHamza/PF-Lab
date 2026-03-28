#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter number of flights: ";
    cin>>num;
    int flight_num[num];
    string destination[num];
    int seats[num];
    for(int i=0; i<num; i++){
        cout<<"Enter flight number for flight "<<i + 1<<": ";
        cin>>flight_num[i];
        cout<<"Enter destination for flight "<<flight_num[i]<<": ";
        cin>>destination[i];
        cout<<"Enter seats available for flight "<<flight_num[i]<<": ";
        cin>>seats[i];
        cout<<endl;
    }
    cout<<"Flight Information"<<endl;
    cout<<"-----------------------"<<endl;
    for(int i=0; i<num; i++){
        cout<<"Flight "<<flight_num[i]<<" to "<<destination[i]<<" has "<<seats[i]<<" seats available."<<endl;
    }
    cout<<endl<<"Flights with less than 5 seats available."<<endl;
    cout<<"----------------------------------------"<<endl;
    for(int i=0; i<num; i++){
        if(seats[i]<5){
            cout<<"Flight "<<flight_num[i]<<" to "<<destination[i]<<" has "<<seats[i]<<" seats available."<<endl;
        }
        else{
            cout<<"No flights with less than 5 seats available."<<endl;
        }

    }
    return 0;
}