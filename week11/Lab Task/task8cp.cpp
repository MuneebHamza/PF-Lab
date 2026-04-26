#include<iostream>
using namespace std;

    void matrice(int columnsize, int rowsize, int matrix[][5]){
        cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<columnsize; j++){
            cout<<"Enter element at position ["<<i<<"]["<<j<<"]: ";
            cin>>matrix[i][j];
        }
    }
    cout<<"Original matrix: "<<endl;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<columnsize; j++){
            cout<<matrix[i][j]<<" \t ";
        }
        cout<<endl;
    
    }
}

void largest(int columnsize, int rowsize, int matrix[][5]){
    int sum=0;
    int columnindex=0;
    for(int j=0; j<columnsize; j++){
        int columnsum=0;
        for(int i=0; i<rowsize; i++){
            columnsum+=matrix[i][j];
        }
        if(columnsum>sum){
            sum=columnsum;
            columnindex=j;
        }
    }
    
    for(int i=0; i<rowsize; i++){
        int temp=matrix[i][0];
        matrix[i][0]=matrix[i][columnindex];
        matrix[i][columnindex]=temp;
    }
    cout<<"The column with the largest sum is: "<<endl;
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<columnsize; j++){
        cout<<matrix[i][j]<<" \t ";
        }
        cout<<endl;
    }
}


int main() {
    const int columnsize=5;
    int rowsize;
    cout<<"Enter row size: ";
    cin>>rowsize;
    int matrix[rowsize][columnsize];
    matrice(columnsize, rowsize, matrix);
    largest(columnsize, rowsize, matrix);
    return 0;
}