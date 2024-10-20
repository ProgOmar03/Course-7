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
void PrintMiddleRow(int arr[3][3],short Rows,short Cols) {
    short MiddleRow = Rows / 2;
    for (short j = 0;j<Cols;j++) {
        printf("   %0*d   ",2,arr[MiddleRow][j]);
    }
    cout << '\n';
}
void PrintMiddleCol(int arr[3][3],short Rows,short Cols) {
    short MiddleCol = Cols / 2;
    for (short j = 0;j<Rows;j++) {
        printf("   %0*d   ",2,arr[j][MiddleCol]);
    }
    cout << '\n';
}
int main()
{
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr,3,3);
    PrintMatrix(arr,3,3);
    cout << "\nMiddle row :\n";
    PrintMiddleRow(arr,3,3);
    cout << "\nMiddle col :\n";
    PrintMiddleCol(arr,3,3);

}
