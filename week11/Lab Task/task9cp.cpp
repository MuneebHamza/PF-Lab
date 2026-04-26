#include <iostream>
using namespace std;

void matrice(int columnsize, int rowsize, int matrix[][3])
{
    cout << "Enter the elements of the matrix: " << endl;
    int sum = 0;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void identity(int columnsize, int rowsize, int matrix[][3])
{
    int count = 0;
    for (int i = 0; i < rowsize; i++)
    {
        bool duplicate=false; 
        for (int j = 0; j < rowsize; j++)
        {
            if(i==j){
                continue;
            }
            bool found = true;
            for (int k = 0; k < columnsize; k++)
            {
                if (matrix[i][k] != matrix[j][k])
                {
                    found = false;
                    break;
                }
            }
            if (found)
            {
                duplicate=true;
                break;  
            }
        }
        if(duplicate){
            count++;
        }
    }
    cout << "The count of identical rows in the array is: " << count;
}



int main()
{
    const int columnsize = 3;
    int rowsize;
    cout << "Enter row size: ";
    cin >> rowsize;
    int matrix[rowsize][columnsize];
    matrice(columnsize, rowsize, matrix);   
    identity(columnsize, rowsize, matrix);
    return 0;
}