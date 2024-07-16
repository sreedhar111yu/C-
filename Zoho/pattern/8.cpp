// 1
// 12
// 123
// 1234
// 12345

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    for(int i=1;i<size;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}