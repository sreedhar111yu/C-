//C++ Program to Check Multiplicability of Two Matrices

#include<bits/stdc++.h>
using namespace std;
int main(){
    int row1, col1, row2,col2;
    cin>>row1;
    cin>>col1;
    cin>>row2,
    cin>>col2;

    if(col1==row2){
        cout<<"Multiplicability";
    }
    else{
        cout<<"not Multiplicability";
    }
}