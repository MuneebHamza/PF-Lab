#include<iostream>
using namespace std;

    void matrice(int columnsize, int rowsize, int matrix[][3]){
        cout<<"Enter the elements of the matrix: "<<endl;
        int sum=0;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<columnsize; j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
            sum += matrix[i][j];
        }
    }
    cout<<"The sum of the elements in the matrix is: "<<sum;
    }


int main() {
    int columnsize=3;
    int rowsize;
    cout<<"Enter row size: ";
    cin>>rowsize;
    int matrix[rowsize][columnsize];
    matrice(columnsize, rowsize, matrix);
    return 0;
    
}