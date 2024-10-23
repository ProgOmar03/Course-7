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
bool IsPalindromeMatrix(int Matrix[3][3],short Rows,short Cols) {
    for (short i = 0;i<Rows;i++) {
        for (short j = 0;j<Cols/2;j++) {
            if(Matrix[i][j]!=Matrix[i][Cols-1-j]) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    srand((unsigned) time(NULL));
    int Matrix1[3][3]={{997,5,12},{22,20,1},{1,7,9}};
    cout << "\nMatrix1\n";
    PrintMatrix(Matrix1,3,3);cout << endl;
    if (IsPalindromeMatrix(Matrix1,3,3)) {
        cout << "Matrix is palindrome";
    }else {
        cout << "Matrix is not palindrome";
    }

}
