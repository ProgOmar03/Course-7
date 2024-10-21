#include <bits/stdc++.h>
using namespace std;
int RandomNumber(int From,int To) {
    int randNum = rand()%(To-From+1)+From;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows,short Cols) {
    for (int i = 0;i<Rows;i++) {
        for (int j = 0;j<Cols;j++) {
            arr[i][j]=RandomNumber(1,10);
        }
    }
}
void PrintMatrix(int arr[3][3],short Rows,short Cols ) {
    for (int i = 0;i<Rows;i++) {
        for (int j = 0;j<Cols;j++) {
            printf(" %0*d ", 2, arr[i][j]);
        }
        cout << '\n';
    }
}
int SumOfMatrix(int arr[3][3],short Rows,short Cols)
{
    int Sum = 0;
    for (int i= 0 ;i<Rows;i++) {
        for (int j = 0;j<Cols;j++) {
            Sum +=arr[i][j];
        }
    }
    return Sum;
}
bool AreEqualMatrices(int Matrix1[3][3],int Matrix2[3][3],short Rows, short Cols) {
    return(SumOfMatrix(Matrix1,Rows,Cols)==SumOfMatrix(Matrix2,Rows,Cols));
}
int main()
{
    srand((unsigned) time(NULL));
    int Matrix1[3][3],Matrix2[3][3];
    FillMatrixWithRandomNumbers(Matrix1,3,3);
    cout <<"\nMatrix1:\n";
    PrintMatrix(Matrix1,3,3);
    FillMatrixWithRandomNumbers(Matrix2,3,3);
    cout <<"\nMatrix2:\n";
    PrintMatrix(Matrix2,3,3);
    if (AreEqualMatrices(Matrix1,Matrix2,3,3))
        cout << "\n YES: both matrices are equal.";
    else
        cout << "\nNO: matrices are not equal.";
}
