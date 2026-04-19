#include<iostream>
using namespace std;

    void check(char alphabets){
        if(alphabets=='a' || alphabets=='b' || alphabets=='c' || alphabets=='d' || alphabets=='e' || alphabets=='f' || alphabets=='g' || alphabets=='h' || alphabets=='i' || alphabets=='j' || alphabets=='k' || alphabets=='l' || alphabets=='m' || alphabets=='n' || alphabets=='o' || alphabets=='p' || alphabets=='q' || alphabets=='r' || alphabets=='s' || alphabets=='t' || alphabets=='u' || alphabets=='v' || alphabets=='w' || alphabets=='x' || alphabets=='y' || alphabets=='z'){
            cout<<"You have entered small "<<alphabets<<endl;
        }
        else if(alphabets=='A' || alphabets=='B' || alphabets=='C' || alphabets=='D' || alphabets=='E' || alphabets=='F' || alphabets=='G' || alphabets=='H' || alphabets=='I' || alphabets=='J' || alphabets=='K' || alphabets=='L' || alphabets=='M' || alphabets=='N' || alphabets=='O' || alphabets=='P' || alphabets=='Q' || alphabets=='R' || alphabets=='S' || alphabets=='T' || alphabets=='U' || alphabets=='V' || alphabets=='W' || alphabets=='X' || alphabets=='Y' || alphabets=='Z'){
            cout<<"You have entered capital "<<alphabets<<endl;
        }
    }

int main(){
    char alphabets;
    cout<<"Enter a character(A/a): ";
    cin>>alphabets;
    check(alphabets);
    return 0;
}
