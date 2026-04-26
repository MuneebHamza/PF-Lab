#include <iostream>
using namespace std;

void nature(string cordinate)
{
    if (cordinate == "A1" || cordinate == "A2" || cordinate == "A3" || cordinate == "B1" || cordinate == "B3" ||
        cordinate == "B4" || cordinate == "B5" || cordinate == "C1" || cordinate == "C3" || cordinate == "C4" ||
         cordinate == "C5" || cordinate == "D1" || cordinate == "D3" || cordinate == "D4" || cordinate == "D5" ||
          cordinate == "E1" || cordinate == "E2" || cordinate == "E5")
    {
        cout << "Resuly: Splash" << endl;
    }
    else
    {
        cout << "Resuly: BOOM" << endl;
    }
}

int main()
{

    const int rowsize = 5;
    const int columnsize = 5;
    string matrix[rowsize][columnsize] = {{".", ".", ".", "*", "*"},
                                          {".", "*", ".", ".", "."},
                                          {".", "*", ".", ".", "."},
                                          {".", "*", ".", ".", "."},
                                          {".", ".", "*", "*", "."}};
    string cordinate;
    cout << "Enter the cordinate to fire torpedo(e.g. A1, B3, E5): ";
    cin >> cordinate;
    nature(cordinate);
    return 0;
}
