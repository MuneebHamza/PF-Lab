#include<iostream>
#include<string>
using namespace std;

void timetravel(string hours , string minutes){
    int hours_int = stoi(hours);
    int minutes_int = stoi(minutes);
    minutes_int += 15;
    if(minutes_int >= 60){
        hours_int += 1;
        minutes_int -= 60;
    }
    if(hours_int >= 24){
        hours_int = 0;
    }
    string hours_str = to_string(hours_int);
    string minutes_str = to_string(minutes_int);
    cout<<hours_str << ":" << minutes_str;

}

int main() {
    string hours, minutes;
    cout << "Enter hours(0-23): ";
    cin >> hours;
    cout << "Enter minutes(0-59): ";
    cin >> minutes;
    timetravel(hours, minutes);
    return 0;

}