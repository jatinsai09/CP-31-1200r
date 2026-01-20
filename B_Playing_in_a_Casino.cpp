#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x;
        cin >> n >> m;
        vector < int > v[m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> x;
                v[j].push_back(x);
            }
        }


        for (int j = 0; j < m; j++) {
            sort(begin(v[j]), end(v[j]));
        }
        
        int ans = 0;
        for (int j = 0; j < m; j++) {
            vector < int > res(n, 0);
            res[0] = v[j][0];
            for (int i = 1; i < n; i++) {
                res[i] = res[i - 1] + v[j][i];
            }
            for (int i = 1; i < n; i++) {
                ans += (v[j][i] * i - res[i - 1]);
            }
        }
        cout << ans << endl;
    }
}