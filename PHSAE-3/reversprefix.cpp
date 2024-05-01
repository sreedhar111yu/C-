#include<bits/stdc++.h>
using namespace std;

string revpre(string word,char ch){
    int index=-1;
    for(int i=0;i<word.size();i++){
        if(word[i]==ch){
            index=i;
            break;
        }
    }
    if(index!=-1){
        int start=0,end=index;
        while (start<end){
             swap(word[start], word[end]);
            start++;
            end--;
        }
    }

}