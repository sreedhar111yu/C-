
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int num=1;

    for(int i=1;i<=size;i++){
        for(int j=1;j<=i;j++){
            cout<<num<<" ";
            num=num+1;
        }
        cout<<endl;
    }
}