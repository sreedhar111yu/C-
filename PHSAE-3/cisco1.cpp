
#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }

    int ans = 0;
    int min_val = a[0];

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            ans += (a[i - 1] - min_val);
            min_val = a[i];
        }
    }

    
    ans += (a[n - 1] - min_val);

    cout << ans << endl;
    return 0;
}
