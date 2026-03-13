#include<iostream>
using namespace std;
main(){
    int i=0;
    while (i <10){
        if(i==5){
            i=i+1;
            continue;
        }
        cout<< "i= "<<i<<endl;
        i=i+1;
        
    }
    
}