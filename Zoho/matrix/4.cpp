#include<bits/stdc++.h>
using namespace std;
int main(){
    int row;
    int col;
    cin>>row;
    cin>>col;

    int m1[row][col],m2[row][col],mul[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>m1[i][j];
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>m2[i][j];
        }
    }
     for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            mul[i][j]=m1[i][j]*m2[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
             cout<<mul[i][j]<<" ";
        }
    }

    
}