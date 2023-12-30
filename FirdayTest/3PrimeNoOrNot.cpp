#include<bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin>>num;
    int div =0;
    for(int i=0;i<=num;i++){
        if(num%i==0)
        div++;
    }
    if(div==2)
        cout<<"prime";
    else
        cout<<"not a prime";
    

}