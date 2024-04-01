#include<bits/stdc++.h>
using namespace std;

bool bin(int n){
    if(n==0 || n==1){
        return false;

    }
    if(n==2){
        return true;
    }
    for(int i=2;i<n/2;i++){
        if(n%1==0){
            return false;
        }
    }
    return true;


};

int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    

}