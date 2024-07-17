
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
     int start=1;
    for(int i=0;i<=size;i++){
        if(i%2==0){
            start=1;
        }
        else{
            start=0;
        }
        for(int j=0;j<i;j++){
            start=1-start;
            cout<<start;
        }
        cout<<endl;
    }
}

// 1
// 01
// 101
// 0101
// 10101