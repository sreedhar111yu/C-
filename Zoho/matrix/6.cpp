//C++ Program to Find Transpose of a Matrix
#include<bits/stdc++.h>
using namespace std;

int main() {
    int row, col;
    cin >> row >> col;

    int m[row][col];

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> m[i][j];
        }
    }

    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            cout << m[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
