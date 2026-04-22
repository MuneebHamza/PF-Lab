#include <iostream>
using namespace std;

void identity(int rowsize, int columnsize, int matrix[][3] )
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
    cout<<"The matrix you entered is: "<<endl;
    for(int i=0; i< rowsize; i++){
        for(int j=0; j<columnsize; j++){
            cout<<matrix[i][j]<< " \t ";
        }
        cout<<endl;
    }

}

int main()
{
    int rowsize = 3;
    int columnsize = 3;
    int matrix[rowsize][columnsize];
    identity(rowsize, columnsize, matrix);
}
