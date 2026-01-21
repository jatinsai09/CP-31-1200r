#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n), v;
        map < int, int > mp;
        
        for (auto & i: a) {
            cin >> i;
            if (mp[i] == 0) {
                v.push_back(i);
            }
            ++mp[i];
        }
        sort(begin(v), end(v));
        
        int c = mp[v[0]];
        for (int i = 1; i < v.size(); i++) {
            if (mp[v[i]] > mp[v[i] - 1]) {
                c += mp[v[i]] - mp[v[i] - 1];
            }
        }
        cout << c << "\n";
    }
}