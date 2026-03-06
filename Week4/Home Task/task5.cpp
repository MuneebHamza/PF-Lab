#include<iostream>
using namespace std;
main (){
    int working_t=63;
    int holiday_t=127;
    int year_d=365;
    int sleep=30000;
    int holiday;
    cout<<"Holidays: ";
    cin>>holiday;
    int working_d=year_d-holiday;
    int time_for_g=(holiday_t*holiday)+(working_t*working_d);
    if(time_for_g > 30000){
        int differ=time_for_g-sleep;
        int hours=differ/60;
        int mint=differ % 60;
        cout<<"Tom will run away"<<endl;
        cout<<hours<<" hours and "<<mint<<" minutes for play";
    }
    else{
        int differ=sleep-time_for_g;
        int hours=differ/60;
        int mint=differ % 60;
        cout<<"Tom sleeps well"<<endl;
        cout<<hours<<" hours and "<<mint<<" minutes less for play";
    }
    

}