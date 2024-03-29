#include<bits/stdc++.h>
#define MOD (int)(1e9 + 7)
using namespace std;

int solution(int N, int K, int X) {
    int dp[N + 1];
    dp[0] = 1;
    dp[1] = K;
    for (int i = 2; i <= N; i++) {
        dp[i] = (1LL * dp[i - 1] * (K - 1)) % MOD;
        if (X <= K) {
            dp[i] = (dp[i] + dp[i - 2]) % MOD;
        }
    }
    return dp[N];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K, X;
        cin >> N >> K >> X;
        int result = solution(N, K, X);
        cout << result << endl;
    }
    return 0;
}
