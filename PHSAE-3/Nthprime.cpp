#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int nthprime(int n){
    vector<int>prime;
    int num=2;
    while(prime.size()<n){
        if(isprime(num)){
            prime.push_back(num);
        }
        num++;
    }
    return prime.back();
}
int main() {
    int N = 1049;
    cout << "The " << N << "th prime number is: " << nthprime(N) << endl;
    return 0;
}