// 12345
// 1234
// 123
// 12
// 1

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    for(int i=1;i<=size;i++){
        for(int j=1;j<=size-i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}