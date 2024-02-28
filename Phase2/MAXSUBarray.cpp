#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    int maxSum=arr[0];
    for(int i=0;i<size;i++){
        for (int j=i;j<size;j++){
            int sum=0;
            for(int k=i;k<=j;k++){
                sum +=arr[k];
            }
            maxSum=max(maxSum,sum);
        }
    }
    cout<<maxSum << endl;

    return 0;

}