#include<bits/stdc++.h>
using namespace std;
int built_check(int n, int m,int k, vector<vector<int>>bridge){
    unordered_map<int,vector<int>>adjlist;
    for(int i=0;i<m;i++){
        int u =bridge[i][0];
        int v=bridge[i][0];
        adjlist[u].push_back(u);
        adjlist[v].push_back(v);
    }

    int checkCen=0;
    for(int i=0;i<n;i++){
        if(adjlist.count(i)&& adjlist[i].size()>1){
            checkCen++;
        }
    }
    int tol=checkCen*k;
    return tol;
}

int main(){
    int n=7;
    int m=6;
    int k=5;
    vector<vector<int>>bridge={{0,1},{1,2},{3,4},{2,4},{2,6},{5,2}};
    int op=built_check(n ,m ,k, bridge);
    cout<<op; 
}