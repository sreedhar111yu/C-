#include<bits/stdc++.h>
using namespace std;


int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    else
    return fibo(n-1)+(n-2);

}

int main(){
    int n;
    cin>>n;

    // for(int i=0;i<n;i++){
        cout<<fibo(n)<<" ";
    // }
    return 0;
}