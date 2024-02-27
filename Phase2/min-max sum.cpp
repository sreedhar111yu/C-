#include<bits/stdc++.h>
using namespace std;
int main (){
    int size;
    cin>>size;
    int arr[size];
    for (int i=0;i<size; i++){
        cin>>arr[i];
    }
      sort(arr, arr + size); //sort

      long long min_sum = accumulate(arr, arr+size - 1, 0LL);//accumulate is used to sum up the elements in the specified range.
      long long max_sum = accumulate(arr+1,arr+size,0LL);

      cout << min_sum << " " << max_sum << endl;


}