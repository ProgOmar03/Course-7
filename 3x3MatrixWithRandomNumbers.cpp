#include <bits/stdc++.h>
using namespace std;
int RandomNumber(int From,int To) {
    int randNum = rand()%(To-From+1)+From;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows,short Cols) {
    for (short i = 0;i<Rows;i++) {
        for (short j=0;j<Cols;j++) {
            arr[i][j]=RandomNumber(1,100);
        }
    }
}
void PrintMatrix(int arr[3][3],short Rows,short Cols) {
    for (short i = 0;i<Rows;i++) {
        for (short j = 0;j<Cols;j++) {
            cout << setw(3) << arr[i][j] << "          ";
        }
        cout << '\n';
    }
}
int main() {
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr,3,3);
    cout << "\nThe following matrix is filled with random numbers\n";
    PrintMatrix(arr,3,3);
    return 0;
    }

