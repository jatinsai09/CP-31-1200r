#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > v(m);
        for (auto & i: v) {
            cin >> i;
        }
        sort(v.begin(), v.end());

        vector < int > range;
        for (int i = 0; i < m - 1; i++) {
            range.push_back(v[i + 1] - v[i] - 1);
        }
        range.push_back(v[0] + n - v[m - 1] - 1);
        sort(rbegin(range), rend(range));
        
        int days = 0, safe = 0;
        for (int i = 0; i < m; i++) {
            int cur = range[i];
            cur -= (days * 2);
            
            if (cur <= 0) break;
            
            safe += (cur == 1 ? 1 : cur - 1);
            days += 2;
        }
        cout << n - safe << endl;
    }
}