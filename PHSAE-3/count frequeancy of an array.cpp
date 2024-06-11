#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
            }
     unordered_map<int,int>count;
     for(int num:arr){
        count[num]++;
     }
    for(auto &pair:count){
        cout << "Element " << pair.first << " occurs " << pair.second << " times" << endl;
    }
    

}