#include<bits/stdc++.h>
using namespace std;
#define size 4

bool upper(int mat[size][size]){
    for(int i=1;i<size;i++){
        for(int j=0;j<i;j++){
            if(mat[i][j]!=0)
             return false;
        }
    }
    return true;
}

int main(){
    int mat[size][size]={
        {1, 3, 5, 3},
        {0, 4, 6, 2},
        {0, 0, 2, 5},
        {0, 0, 0, 6}
    };
    if(upper(mat)){
        cout<<"upper tr mat";
    }
    else{
        cout<<"not upper tr mat";
    }
}