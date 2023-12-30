#include<bits/stdc++.h>
using namespace std;
int main (){
    int num;
    cin>>num;
    int count=0;
    while(num>0){
        count++;
        num=num/10;
    }
    cout<<count;

    
}