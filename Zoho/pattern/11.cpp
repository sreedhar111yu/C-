// Pyramid star pattern in C++
//space 4 3 2 1 0
//star 1 3 5 7 9 twice the time
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        //space 5-0-1=4
        //5-1-1=3
        for(int j=0;j<size-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        
        for(int j=0;j<size-i-1;j++){
            cout<<" ";
        }

        cout<<endl;

    }
}