#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>pairs;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size; +j){
            pairs.push_back({arr[i],arr[j]});
        }
    }
    for(auto pair:pairs){
        cout<<pair.first<<pair.second<<endl;
    }
    
}