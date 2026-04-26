#include <iostream>
using namespace std;

 void transpose(int cardata[][5], int rowsize, int columnsize){
    for(int j=0; j<columnsize; j++){
        for(int i=0; i<rowsize; i++){
            cout<<cardata[i][j]<< " \t ";
        }
        cout<<endl;
    }
 }

int main()
{
    int rowsize=5;
    int columnsize=5;
    int cardata[5][5] = { {10, 7, 12, 10, 4},
                          {18, 11, 15, 17, 2},
                          {23, 19, 12, 16, 14},
                          {7, 12, 16, 0, 2},
                          {3, 5, 6, 2, 1} };
    transpose(cardata, rowsize, columnsize);
    return 0;
}