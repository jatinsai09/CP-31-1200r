#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < int > v(n);
        for (auto & i: v) {
            cin >> i;
        }
        vector < int > prev(k + 1, 0);
        vector < vector < int >> ans(k + 1, {
            n
        });

        for (int i = 0; i < n; i++) {
            int d = i - prev[v[i]];

            ans[v[i]].pop_back();
            ans[v[i]].push_back(d);
            ans[v[i]].push_back(n - i - 1);

            prev[v[i]] = i + 1;
        }

        int res = n;
        for (int i = 1; i <= k; i++) {
            sort(ans[i].rbegin(), ans[i].rend());

            if (ans[i].size() > 1) {
                res = min(max(ans[i][0] / 2, ans[i][1]), res);
            }
            else {
                res = min(res, ans[i][0] / 2);
            }
        }
        cout << res << endl;
    }
}