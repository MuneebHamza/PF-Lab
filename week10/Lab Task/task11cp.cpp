#include<iostream>
using namespace std;

float totalwater(float flowrate1, float flowrate2, float hours){
    float water= (flowrate1 + flowrate2) * hours;
    return water;
}

void percentage(float volume, float flowrate1, float flowrate2, float hours, float twater){
    if(twater<=volume){
        int pool=(twater/volume)*100;
        int pipe1=(flowrate1 * hours/twater) * 100;
        int pipe2=(flowrate2 * hours/twater) * 100;
        cout<<"The pool is "<<pool<<"% full. Pipe 1: "<<pipe1<<"% and pipe 2:"<<pipe2<<"%"<<endl;
    }
    else{
        int overflow=twater-volume;
        cout<<"For "<<hours<<" hours, the pool overflows with "<<overflow<<" liters."<<endl;
    }
}

int main() {
    float volume;
    cout<<"Enter volume of the pool in liters: ";
    cin>>volume;
    float flowrate1;
    cout<<"Enter flow rate of the first pipe per hour: ";
    cin>>flowrate1;
    float flowrate2;
    cout<<"Ente flow rate of the secon pipe per hour: ";
    cin>>flowrate2;
    float hours;
    cout<<"Enter hours that the worker is absent: ";
    cin>>hours;
    float twater=totalwater(flowrate1, flowrate2, hours);
    percentage(volume, flowrate1, flowrate2, hours, twater);
}