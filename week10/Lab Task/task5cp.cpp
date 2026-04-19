#include<iostream>
#include<cmath>
using namespace std;
float determinent(float a , float b, float c){
    float dis=(b*b)-(4*a*c);
    return dis;
}
void check(float answer, float a, float b, float c){
    if(answer==0){
        //root1 == root2 (so answer for both factrs will be x)
        float x=-(b)/(2*a);
        cout<<"Solutions: x= "<<x<<endl;
    }
    else if(answer>0){
        float x1=(-b+(sqrt(answer)))/(2*a);
        float x2=(-b-(sqrt(answer)))/(2*a);
        cout<<"Solutions: x= "<<x1<<" and x= "<<x2<<endl;
    }
    else{
        float x1_1=-(b)/(2*a);
        float x1_2=sqrt(-(answer))/(2*a);
        cout<<"Solutions: x = "<<x1_1<<" + "<<x1_2<<"i and x = "<<x1_1<<" - "<<x1_2<<"i"<<endl;
        
    }
}

int main (){
    float a,b,c;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<"Enter the value of c: ";
    cin>>c;
    float answer=determinent(a,b,c);
    check(answer, a, b, c);
    return 0;
}