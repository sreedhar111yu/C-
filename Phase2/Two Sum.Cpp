#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    map<int ,int >mp;
    int target;
    cout<<"enter target val";
    cin>>target;
    for (int i=0;i<size;i++){
        int complement =target-arr[i];
       if (mp.find(complement) != mp.end()){
           cout << "Pair found: " << arr[i] << " and " << complement << endl;
           break;
       }

       mp[arr[i]] = i;
    }
    return 0;
}