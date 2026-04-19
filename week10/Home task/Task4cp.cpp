    #include<iostream>
    #include<cmath>
    using namespace std;

    float dayswork(int days){
        float availabledays=days-(days*0.10);
        return availabledays;
    }

    void workdone(float availabledays, int workers, int hours){
        float work_done=(availabledays*workers)*10;
        float workdone=floor(work_done);
        if(workdone>=hours){
            cout<<"Yes! "<<workdone-hours<<" hours left.";
        }
        else{
            cout<<"Not enough time! "<<hours-workdone<<" hours needed.";
        }
    }


    int main(){
        int hours, days , workers;
        cout<<"Enter needed hours: ";
        cin>>hours;
        cout<<"Enter number of days of firm: ";
        cin>>days;
        cout<<"Enter number of workers: ";
        cin>>workers;
        float availabledays=dayswork(days);
        workdone(availabledays, workers, hours);
        return 0;
    }