#include<bits/stdc++.h>
using namespace std;

bool ispali(string s,int start,int end){
    while(start<end){
        while(start < end && !isalnum(s[start])){
            start++;
        }
        while(start < end && !isalnum(s[end])){
            end--;
        }
        char c1=tolower(s[start]);
        char c2=tolower(s[end]);
        if(c1==c2){
            return true;
        }
        start++;
        end--;

    }
    return false;
}

bool isPal(string s){
    return ispali(s ,0, s.size()-1);
}