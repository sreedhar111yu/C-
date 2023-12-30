#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;

    vector<int>arr(size);
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"enter Kth element :";
    int k;
    cin>>k;
    if(k>=1 && k<=size){
        int kthElement=arr[k-1];
        cout<<kthElement;

    }else{
        cout<<"-1";
    }
    return 0;

}