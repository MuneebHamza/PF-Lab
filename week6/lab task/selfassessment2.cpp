#include<iostream>
using namespace std;
main () {
    float ticket=500;
    float dis,total;
    bool movie=false;
    string movies[5]={"Gladiator","Starwars","Terminator","TakingLives","Tombrider"};
    string user;
    cout<<"Enter movie name: ";
    cin>>user;
    for(int i=0; i<5; i++){
        if(user==movies[i]){
            movie=true;
            if(i%2==0){
                dis=500*0.10;
                total=ticket-dis;

            }
            else{
                dis=500*0.05;
                total=ticket-dis;
            }
        }
    }
    cout<<"The price of ticket :"<<total;
    

    
}   