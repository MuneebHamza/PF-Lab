#include<iostream>
using namespace std;
int main () {
    int num;
    cout<<"Enter number of coustomers: ";
    cin>>num;
    string coustomer[num];
    bool found=false;
    cout<<"Enter the names of "<<num<<" coustomers: "<<endl;
    for(int i=0; i<num; i++){
        cin>>coustomer[i];
    }
    cout<<"Enter a letter to check: ";
    char letter;
    cin>>letter;
    int count=0;
    for(int i=0; i<num; i++){
        if(coustomer[i][0]==letter){
        found=true;
        count++;
        }
    }
    cout<<"Total names starting with '"<<letter<<"': "<<count;
    return 0;
}