
#include<bits/stdc++.h>
using namespace std;

int com(int n) {
    if (n == 0 || n == 1) return 1;
    return n * com(n - 1);
}

int main() {
    int n, x;
    cin >> n >> x;
    int ans = 0;

    for (int i = 1; i <= x; i++) {
        ans = ans + (com(n) / (com(n - i) * com(i)));
    }

    cout << ans;
    return 0;
}
