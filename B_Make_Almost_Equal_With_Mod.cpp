#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (auto & i: v) {
            cin >> i;
        }
        int res = 2;

        while (1) {
            unordered_set < int > rem;
            for (auto& i: v) {
                rem.insert(i % res);
            }
            if (rem.size() == 2) {
                break;
            }
            res <<= 1LL;
        }
        cout << res << "\n";
    }
}