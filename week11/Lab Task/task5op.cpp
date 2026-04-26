#include <iostream>
using namespace std;

void identity(int rowsize, int columnsize, int matrix[][3])
{
    cout << "Enter the elements of the matrix: " << endl;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            cout << "Enter element at position [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "The matrix you entered is: " << endl;
    for (int i = 0; i < rowsize; i++)
    {
        for (int j = 0; j < columnsize; j++)
        {
            cout << matrix[i][j] << " \t ";
        }
        cout << endl;
    }
}
void realidentity(int matrix[][3], int columnsize)
{
    if (matrix[0][0] == 1 && matrix[0][1] == 0 && matrix[0][2] == 0 &&
        matrix[1][0] == 0 && matrix[1][1] == 1 && matrix[1][2] == 0 &&
        matrix[2][0] == 0 && matrix[2][1] == 0 && matrix[2][2] == 1)
    {
        cout << "The entered matrix is an identity matrix." << endl;
    }
    else
    {
        cout << "The entered matrix is NOT an identity matrix." << endl;
    }
}

int main()
{
    const int rowsize = 3;
    const int columnsize = 3;
    int matrix[rowsize][columnsize];
    identity(rowsize, columnsize, matrix);
    realidentity(matrix, columnsize);
    return 0;
}
