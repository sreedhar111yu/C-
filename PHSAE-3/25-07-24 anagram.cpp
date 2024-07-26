#include<bits/stdc++.h>
using namespace std;
int main(){
    string t;
    cout<<"t";
    cin>>t;

    string s;
    cout<< "s";
    cin>>s;

    if(t.size()!=s.size()){
        cout<<false;
    }
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            return false;
        }
    }
    return true;
}