#include<bits/stdc++.h>
using namespace std;

bool anagram(string s, string t){
    if(s.size()!=t.size()){
        return false;
    }
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());

    for(int i=0;i<s.size();i++){
        if(s[i]!=t[i]){
            return false;
        }
    }
    return true;
}
int main(){
    string s="anagram";
    string t="nagaram40";
    if(anagram(s,t)){
        cout<<"true";
    }
        else{
            cout<<"false";
        }
    
    
    }