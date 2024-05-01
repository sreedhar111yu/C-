#include<bits/stdc++.h>
using namespace std;
// recuresion
bool ispalindrom(string str,int start,int end){
    if(start>=end){
        return true;
    }
    if(str[start]!=str[end]){
        return false;
    }
    return ispalindrom(str,start+1,end-1);
}
int main(){
    string str;
    cin>>str;
    if(ispalindrom(str,0,str.size()-1)){
        cout<<"ispalindrom";
    }
    else{
        cout<<"NOT a Palindrom";
    }
}