#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int bi(int k,int n){
    return factorial(n)/factorial(k)*factorial(n-k);
}

void pascal(int n){
    for(int j=0;j<n;j++){
        for(int i=0;i<=j;i++){
            cout<<bi(i,j)<<" ";
        }
    }
}

int main(){
    int n;
    cin>>n;
    pascal(n);
}