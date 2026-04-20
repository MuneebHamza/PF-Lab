#include<iostream>
using namespace std;

int bonus(int base, int score, int experience){
    float bonus = 0.0;
    if(score>=90){
        bonus = base*0.20;
    }
    else if(score>=75 && score<=89){
        bonus = base*0.10;
    }
    else{
        bonus = base*0.05;
    }
    if(experience>=5){
        bonus += base*0.05;
    }
    
    int total=base+bonus;
    return total;
}

void printbonus(int total, int base){
    cout<<"Final salary: "<<total;
}

int main (){
    int base, score , experience;
    cout<<"Enter base, score and experience: ";
    cin>>base>>score>>experience;
    int total=bonus(base, score, experience);
    printbonus(total, base);
    return 0;
}