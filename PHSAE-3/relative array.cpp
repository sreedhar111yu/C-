#include<bits/stdc++.h>
using namespace std;

 vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int>count;
        for(int num:arr1){
            count[num]++;
        }
        vector<int>res;
        for(int num:arr2){
            if(count.find(num)!=count.end()){
                for(int i=0;i<count[num];i++){
                    res.push_back(num);
                }
                count.erase(num);
            }
        }
        vector<int>rem;
        for(auto&entry:count){
            for(int i=0;i<entry.second;i++){
                rem.push_back(entry.first);
            }
        }
        sort(rem.begin(),rem.end());
        res.insert(res.end(),rem.begin(),rem.end());
        return res;
        
    }
    int main() {
    vector<int> arr1 = {2, 3, 1, 3, 2, 4, 6, 7, 9, 2, 19};
    vector<int> arr2 = {2, 1, 4, 3, 9, 6};
    
    vector<int> sortedArr1 = relativeSortArray(arr1, arr2);

    for (int num : sortedArr1) {
        cout << num << " ";
    }

    return 0;
}