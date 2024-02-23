#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int size=s.size();
    for(int i=0;i<size;i++){
        for(int j=i;j<size;j++){
            for(int k=i;k<=j;k++){
                cout<<s[k];
            }
            cout<<endl;
        }
    }
}