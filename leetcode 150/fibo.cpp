#include<bits/stdc++.h>
using namespace std;
int fibo(int n){
    vector<int>fibo(n+1);

     fibo[0]=0;
     fibo[1]=1;

     for(int i=2;i<n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
     }
     return fibo[n];
}
int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    cout << "The " << n << "th Fibonacci number is: " << fibo(n) << endl;
    return 0;
}