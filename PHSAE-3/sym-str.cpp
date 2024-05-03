#include<bits/stdc++.h>
using namespace std;

string palindrom(string input){
     string str="";
    for(char ch:input){
        if(isalnum(ch)){
            str += tolower(ch); 
        }
    }
    int left =0;
    int right =str.size()-1;
    while(left<right){
        if(str[left]!=str[right]){
            return "not a palindrome"; 
        }
        left++;
        right--;
    }
    return "palindrome"; 
}
int main() {
    string input = "rac-*e÷fsa/a";
    string result = palindrom(input);
    cout << "Output: " << result << endl; 
    return 0;
}  
