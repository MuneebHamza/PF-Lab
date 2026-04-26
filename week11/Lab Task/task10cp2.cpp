#include <iostream>
using namespace std;

char objects[5][5] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}};

bool gravity = false;
bool isBlackHole = false;

void displayworld()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << objects[i][j] << " \t ";
        }
        cout << endl;
    }
    cout << endl;
}

void movewithoutblackhole(int times)
{
    int count = 0;
    while (count < times)
    {
        for (int row = 3; row >= 0; row--)
        {
            for (int col = 0; col < 5; col++)
            {
                if (objects[row][col] == '#')
                {
                    if (objects[row + 1][col] == '-')
                    {
                        objects[row + 1][col] = '#';
                        objects[row][col] = '-';
                    }
                }
            }
        }
        count += 1;
    }
}
void movewithblackhole(int times)
{
    int count = 0;
    char lastrow[5];
    while (count < times)
    {
        // for storing last row;
        for (int col = 0; col < 5; col++)
        {
            lastrow[col] = objects[4][col];
        }
        for (int row = 3; row >= 0; row--)
        {
            for (int col = 0; col < 5; col++)
            {  //bring down everything
                objects[row + 1][col] = objects[row][col];
            }
        }
        // bring last row to first row
        for (int col = 0; col < 5; col++){
            objects[0][col] = lastrow[col];
        }
        count += 1;
    }
}

void timetick(int times)
{
    if (gravity == true && isBlackHole == false)
    {
        movewithoutblackhole(times);
    }
    else if (gravity == true && isBlackHole == true)
    {
        movewithblackhole(times);
    }
}

void setGravitystatus(bool status)
{
    gravity = status;
}

void setBlackHolestatus(bool status)
{
    isBlackHole = status;
}

int main()
{
    displayworld();
    setGravitystatus(true);
    setBlackHolestatus(true);
    timetick(2);
    displayworld(); 
    return 0;
}