#include <iostream>
using namespace std;
int main()
{
    int row1, row2, column1, column2;

    // input the value of row and column of first matrix
    cout << "Enter the row of 1st matrix :";
    cin >> row1;
    cout << "Enter the column of 1st matrix :";
    cin >> column1;

    int matrix1[row1][column1];
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout << "Enter the value of " << i + 1 << "row and " << i + 1 << "column :";
            cin >> matrix1[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout << " ";
            cout << matrix1[i][j];
        }
        cout << endl;
    }

    // input the value of row and column of second matrix

    cout << "Enter the row of 2nd matrix :";
    cin >> row2;
    cout << "Enter the column of 2nd matrix :";
    cin >> column2;
    int matrix2[row1][column1];

    for (int i = 0; i < row2; i++)
    {
        for (int j = 0; j < column2; j++)
        {
            cout << "Enter the " << i + 1 << "row and " << i + 1 << "column :";
            cin >> matrix2[i][j];
        }
    }
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout << " ";
            cout << matrix2[i][j];
        }
        cout << endl;
    }

    // logic of multiply matrix

    int mul[row1][column1];
    int i, j, k;

    // Initialize result matrix to 0
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column2; j++)
        {
            mul[i][j] = 0;
        }
    }

    // Multiply matrices
    for (i = 0; i < row1; i++)
    {
        for (j = 0; j < column2; j++)
        {
            for (k = 0; k < column1; k++)
            {
                mul[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    cout << "the mul of two matrix:" << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < column1; j++)
        {
            cout << " ";
            cout << mul[i][j];
        }
        cout << endl;
    }
    /*
    1 2
    3 4
    4 5
    5 4

    000
    00=0+1*4
    14=4+2*5\\00
    01=0+1*5=5
    01=5+2*4=13
    */
}