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
bool IsIdentityMatrix(int Matrix[3][3],short Rows,short Cols) {

    for (short i =0;i<Rows;i++) {
        for (short j = 0;j<Cols;j++) {
            if(i==j && Matrix[i][j]!=1) {
                return false;
            }
            else if(i!=j&&Matrix[i][j]!=0) {
                return false;
            }
        }
    }
    return true;
}
int main()
{
    srand((unsigned) time(NULL));
    int Matrix1[3][3]={{1,0,0},{0,1,0},{0,0,1}};
    PrintMatrix(Matrix1,3,3);
    cout << endl;
    if(IsIdentityMatrix(Matrix1,3,3)) {
        cout << "Yes, They are identical\n";
    }else {
        cout <<"No, They are not identical\n";
    }
}
