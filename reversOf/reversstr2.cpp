#include<bits/stdc++.h>
using namespace std;
int main(){
    string name;
    cin>>name;
    int size=name.size();
    for(int i=size-1;i>=0;i-2){
        cout<<name[i];
    }
}