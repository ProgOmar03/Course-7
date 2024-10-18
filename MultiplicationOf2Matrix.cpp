#include <bits/stdc++.h>
using namespace std;
int RandomNumber(int From, int To)
{
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            arr[i][j]=RandomNumber(1,100);

        }
    }
}
void PrintMatrix(int arr[3][3], short Rows, short Cols)
{
    for (short i = 0; i < Rows; i++)
    {
        for (short j = 0; j < Cols; j++)
        {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void MultiplyMatrix(int Matrix1[3][3],int Matrix2[3][3],int Matrix3[3][3],short Rows,short Cols) {
    for (int i = 0;i<Rows;i++) {
        for(int j = 0;j<Cols;j++) {
            Matrix3[i][j] = Matrix1[i][j] *Matrix2[i][j];
        }
    }
}
void PrintMultiplicationOf2Matrix(int arr3[3][3],short Rows,short Cols) {
    for (int i =0;i<Rows;i++) {
        for (int j=0;j<Cols;j++) {
             cout << setw(3) << arr3[i][j] << ' ';
        }
        cout << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    int arr2[3][3];
    int arr3[3][3];
    FillMatrixWithRandomNumbers(arr, 3, 3);
    cout << "\nMatrix1: \n";
    PrintMatrix(arr,3,3);
    FillMatrixWithRandomNumbers(arr2, 3, 3);
    cout << "\nMatrix2\n";
    PrintMatrix(arr2,3,3);
    MultiplyMatrix(arr,arr2,arr3,3,3);
    cout << "\nResults:\n";
    PrintMatrix(arr3,3,3);
}
