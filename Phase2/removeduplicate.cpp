#include<bits/stdc++.h>
using namespace std;
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    set<int>st;
    for(int i=0;i<size;i++){
        st.insert(arr[i]);
    }
    int start=0;
    for(auto it:st){
        arr[start++]=it;
    }
   for (int i = 0; i < start; i++) {
        cout << arr[i] << " ";
    }
    return 0;

}