#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[size];
    }
    int k;
    cout<< "enter K:";
    cin>>k;
    unordered_map<int, int >mp;
    for(int i=0;i<size;i++){
        mp[arr[i]]++;
    }

}