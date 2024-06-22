// Given a string, find the minimum number of characters to be inserted to convert it to palindrome.
// For Example:
// ab: Number of insertions required is 1. bab or aba
// aa: Number of insertions required is 0. aa
// abcd: Number of insertions required is 3. dcbabcd


// Example 1:

// Input: str = "abcd"
// Output: 3
// Explanation: Inserted character marked
// with bold characters in dcbabcd
// Example 2:

// Input: str = "aa"
// Output: 0
// Explanation:"aa" is already a palindrome.


#include<bits/stdc++.h>
using namespace std;

int countmin(string str){
    int n=str.size();

    vector<vector<int>>dp(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    for(int len=2;len<=n;len++){
        for(int i=0;i<n-len;i++){
            int j=i+len-1;
            if(str[i]==str[j]){
                dp[i][j]=dp[i+1][j-1]+2;
            }
            else{
                dp[i][j]=max(dp[i+1][j],dp[i][j-1]);
            }
        }
    }
    return dp[0][n-1];
}
int insert(string str){
    int n=str.size();
    int Plen=countmin(str);
    return n-Plen;
}