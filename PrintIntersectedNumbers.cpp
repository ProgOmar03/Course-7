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
bool CheckSparseMatrix(int Matrix[3][3],short Rows,short Cols)
{
    short zeros=0;
    short nonzero=0;
    short NumberCount = 0;
    for (short i = 0;i<Rows;i++) {
        for (short j = 0;j<Cols;j++) {
            if(Matrix[i][j]==0) {
                zeros++;
            }
            else {
                nonzero++;
            }
        }
    }
    if(zeros>nonzero) {
        return true;
    }else {
        return false;
    }
}
bool IsNumberInMatrix(int Matrix[3][3],int Number,short Rows,short Cols) {
    short NumberCount = 0;
    for (short i = 0;i<Rows;i++) {
        for (short j = 0;j<Cols;j++) {
            if(Matrix[i][j]==Number) {
                return true;
            }
        }
    }
    return false;
}
void PrintIntersectedNumbers(int Matrix1[3][3],int Matrix2[3][3],short Rows,short Cols) {
    int Number;
    for (short i = 0;i<Rows;i++) {
        for (short j = 0;j<Cols;j++) {
            Number = Matrix1[i][j];
            if(IsNumberInMatrix(Matrix2,Number,Rows,Cols)) {
                cout << setw(3) << Number << "              ";
            }
        }
    }
}
int main()
{
    srand((unsigned) time(NULL));
    int Matrix1[3][3]={{77,5,12},{22,20,1},{1,0,9}};
    int Matrix2[3][3]={{5,80,90},{22,77,1},{10,8,33}};
    cout << "\nMatrix1\n";
    PrintMatrix(Matrix1,3,3);
    cout << "\nMatrix2\n";
    PrintMatrix(Matrix2,3,3);
    cout << endl;
    PrintIntersectedNumbers(Matrix1,Matrix2,3,3);
}
