#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;

    for(int i=0;i<size;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        //  for(int k=0;k<2*size-(2*i+1);k++){
        //     cout<<"*";
        // }
        char ch='A';
        for(int k=0;k<2*size-(2*i+1);k++){
            cout<<ch<<" ";
        }
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        cout<<endl;
    }

}