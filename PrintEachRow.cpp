#include <bits/stdc++.h>
using namespace std;
int RandomNumber(int From,int To) {
    int randNum = rand()%(To-From+1)+From;
    return randNum;
}
void FillMatrixWithRandomNumbers(int arr[3][3],short Rows,short Cols) {
    for (int i = 0;i<Rows;i++) {
        for (int j = 0;j<Cols;j++) {
            arr[i][j]=RandomNumber(1,100);
        }
    }
}
void PrintMatrix(int arr[3][3],short Rows,short Cols) {
    for (int i = 0;i<Rows;i++) {
        for (int j = 0;j<Cols;j++) {
            cout <<setw(3) <<arr[i][j] << ' ';
        }
        cout << endl;
    }
}
int RowSum(int arr[3][3],int Rows,int Cols) {
    int Sum = 0;
    for (int j = 0;j<Cols;j++) {
        Sum+=arr[Rows][j];
    }
    return Sum;
}
void PrintEachRow(int arr[3][3],int Rows,int Cols) {
    for(int i = 0;i<Rows;i++) {
        cout <<"Row" << i + 1 << " Sum = " << RowSum(arr,i,Cols) << endl;
    }
}
int main()
{
    srand((unsigned)time(NULL));
    int arr[3][3];
    FillMatrixWithRandomNumbers(arr,3,3);
    PrintMatrix(arr,3,3);
    PrintEachRow(arr,3,3);
    return 0;
    }

