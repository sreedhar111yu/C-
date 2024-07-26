#include<bits/stdc++.h>
using namespace std;

int main(){
    int row;
    int col;
    cout<<"row";
    cin>>row;
    cout<<"col";
    cin>>col;
    int sum=0;
    
    int mat[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=mat[i][j]++;
        }
        cout<<"sum of row:";
        cout<<i<<" "<<sum<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum+=mat[j][i]++;
        }
        cout<<"sum of col:";
        cout<<i<<" "<<sum<<endl;
    }

}