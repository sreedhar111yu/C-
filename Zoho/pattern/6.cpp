//Right Down Triangle

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int j=size;j>i;j--){
            cout<<"*";
        }
        cout<<"\n";
    }


}