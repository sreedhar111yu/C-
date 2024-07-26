#include<bits/stdc++.h>
using namespace std;

int main(){
    int row, col;
    cout << "row: ";
    cin >> row;
    cout << "col: ";
    cin >> col;

    // Identity matrix should be a square matrix
    if(row != col) {
        cout << "not an identity matrix" << endl;
        return 0;
    }

    int arr[row][col];
    bool isIdentity = true;

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(i == j) {
                // Diagonal elements should be 1
                if(arr[i][j] != 1) {
                    isIdentity = false;
                    break;
                }
            } else {
                // Non-diagonal elements should be 0
                if(arr[i][j] != 0) {
                    isIdentity = false;
                    break;
                }
            }
        }
        if(!isIdentity) break;
    }

    if(isIdentity) {
        cout << "identity matrix" << endl;
    } else {
        cout << "not an identity matrix" << endl;
    }

    return 0;
}