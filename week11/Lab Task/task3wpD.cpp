#include <iostream>
using namespace std;

  int colour(int cardata[][5], string color){
    int idx=-1;
    if(color=="Red"){
        idx=0;
    }
    if(color=="Black"){
        idx=1;
    }
    if(color=="Brown"){
        idx=2;
    }
    if(color=="Blue"){
        idx=3;
    }
    if(color=="Grey"){
        idx=4;
    }

    return idx;
}

void sum(int cardata[][5], int idx, string color){
    int sum=0;
    for(int i=0; i<5; i++){
        sum +=cardata[i][idx];
    }
    cout<<"Total "<<color<<" Cars: "<<sum;
}

int main()
{
    int cardata[5][5] = { {10, 7, 12, 10, 4},
                          {18, 11, 15, 17, 2},
                          {23, 19, 12, 16, 14},
                          {7, 12, 16, 0, 2},
                          {3, 5, 6, 2, 1} };
    string color;
    cout<<"Enter color of which column you want to show: ";
    cin>>color;
    int idx=colour(cardata,color);
    sum(cardata,idx,color);
    return 0;
}