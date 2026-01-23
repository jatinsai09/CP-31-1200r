#include<bits/stdc++.h>

using namespace std;
const int MOD = 1e9 + 7;
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        long long int res = 1;
        for (int i = 0; i < k; i++) {
            res = (res * n) % MOD;
        }
        cout << res << endl;
    }
}