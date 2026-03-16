#include<iostream>
#include<iomanip>
using namespace std;
main () {
    int number;
    cout<<"Enter numbers count: ";
    cin>>number;
    float p1=0, p2=0, p3=0, p4=0, p5=0;
    float per1, per2, per3, per4, per5;
    for(int i=1; i<=number; i++){
        int num;
        cout<<"Enter a number: ";
        cin>>num;
        if(num<200){
            p1++;
        }
        else if(num>=200 && num<400){
            p2++;
        }
        else if(num >=400 && num<600){
            p3++;
        }
        else if(num >=600 && num <800){
            p4++;
        }
        else{
             p5++;
        }
    }
    cout<< fixed << setprecision(2);
    per1=(p1/number)*100;
    per2=(p2/number)*100;
    per3=(p3/number)*100;
    per4=(p4/number)*100;
    per5=(p5/number)*100;
    cout<<per1<<"%"<<endl;
    cout<<per2<<"%"<<endl;
    cout<<per3<<"%"<<endl;
    cout<<per4<<"%"<<endl;
    cout<<per5<<"%"<<endl;
} 