#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>arr,int l,int m,int r){
    int n1=m-l+1;
    int n2=r-m;

    vector<int>L(n1);
    vector<int>R(n2);

    for(int i=0;i<n1;i++){
        L[i]=arr[i+l];
    }
    for(int j=0; j<n2;j++)
    {
        R[j]=arr[m+1+j];

    }

    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j]){
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
        while(j<n2){
            arr[k]=R[j];
            j++;
            k++;
        }
    }

    void mergeSort(vector<int>arr,int l,int r)
    {
        if(l<=r){
            return;
        }
        int m=l+(r-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        mergeSort(arr,l,m,r);
    }
    void printArray(vector<int>& arr){
        for(int i=0;i<arr.size();i++){
            cout<<arr[i]<<" ";
        }

        int main(){
            vector<int>arr={1,12,5,10,8,4};
            int size=arr.size();
            printArray(arr);

            mergeSort(arr,0,size-1);

            printArray(arr);
            return 0;
        }

    }

}