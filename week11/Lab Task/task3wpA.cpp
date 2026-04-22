#include <iostream>
using namespace std;

  void bluetoyota(int cardata[][5]){
    int blue= cardata[1][3];
    cout<<blue;
  }

int main()
{
    int cardata[5][5] = { {10, 7, 12, 10, 4},
                          {18, 11, 15, 17, 2},
                          {23, 19, 12, 16, 14},
                          {7, 12, 16, 0, 2},
                          {3, 5, 6, 2, 1} };
    bluetoyota(cardata);
}   