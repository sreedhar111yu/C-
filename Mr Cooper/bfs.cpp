#include<bits/stdc++.h>
using namespace std;

void bfs(vector<vector<int>>&arr,int startnode){
    int size=arr.size();
    vector<bool>visited(size,false);
    queue<int>q;
    q.push(startnode);
    while(!q.empty()){
        int Currentnode=q.front();
        q.pop();
        cout<<Currentnode<<""<<endl;

        for(int i=0;i<arr[Currentnode].size();i++){
            if(!visited [arr[Currentnode][i]]){
                q.push(arr[Currentnode][i]);
                visited[arr[Currentnode][i]]=true;
            }
        }  
    }
   
}
int main() {
    
    vector<vector<int>> graph = {{1, 2}, {0, 2, 3}, {0, 1, 3}, {1, 2}};
    bfs(graph, 0); 
    return 0;
}