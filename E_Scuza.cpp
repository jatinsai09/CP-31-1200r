#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        vector < int > v(n + 1), psum(n + 1), maxi(n + 1);

        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            psum[i] = v[i] + psum[i - 1];
            maxi[i] = max(v[i], maxi[i - 1]);
        }
        
        int k, res;
        while (q--) {
            res = 0;
            cin >> k;

            int ind = upper_bound(maxi.begin(), maxi.end(), k) - maxi.begin() - 1;
            if (ind >= 0) {
                res = psum[ind];
            }
            cout << res << " ";
        }
        cout << "\n";
    }
}