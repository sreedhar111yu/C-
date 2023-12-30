#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {1, 2, 2, 3, 4, 4, 5,5,6};
    int size = sizeof(arr) / sizeof(arr[0]);
    set<int>st;
    vector<int>result;
    for(int i=0;i<size;i++){
        st.insert(arr[i]);
    }
     for (auto it = st.begin(); it != st.end(); ++it) {
        result.push_back(*it);
    }
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << " ";
    }

}