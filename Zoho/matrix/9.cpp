//lower  triangular matrix or not cpp
#include<bits/stdc++.h>
using namespace std;
#define N 4

bool lower(int mat[N][N]){
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            if(mat[i][j]!=0)
            return false;
        }
    }
    return true;
}

int main(){
    int mat[N][N]={
         {1, 0, 0, 0},
        {1, 4, 0, 0},
        {4, 6, 2, 0},
        {0, 4, 7, 6}
    };
    if(lower(mat)){
        cout<<"lower triangular matrix";
    }
    else{
        cout<<"not lower triangular matrix ";
    }
}