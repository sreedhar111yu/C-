#include<bits/stdc++.h>
using namespace std;

bool ispalindrom(string str){
    // Two pointer
    int left=0;
    int right=str.size()-1;

    while(left<right){
        if(str[left]!=str[right]){
            return false;
        }
        left++;
        right--;
    }
    return true;
}
int main(){
    string str;
    cin>>str;
    if(ispalindrom(str)){
        cout<<str<< "is palindrom"<<endl;
    }
        else{
            cout<<str<<" Not a palindrom"<<endl;
        }
    
}