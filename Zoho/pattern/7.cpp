// Hollow triangle star pattern in C++

#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    for(int i=1;i<=size;i++){
        for(int j=0;j<i;j++){
            if(i!=size){
                if(j==0 || j==i-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            else{
                cout<<"*";
            }
        }
        cout<<"\n";
    }
}