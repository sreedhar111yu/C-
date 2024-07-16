#include<bits/stdc++.h>
using namespace std;
int main(){
    int fac;
    cin>>fac;

    long long val=1;

    for(int i=2;i<=fac;i++){
        val=val*i;
        cout<<val;
    }
}