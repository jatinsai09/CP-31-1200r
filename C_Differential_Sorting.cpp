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

        if (v[n - 1] < v[n - 2]) {
            cout << "-1\n";
        }
        else if (v[n - 1] >= 0) {
            cout << n - 2 << endl;
            for (int i = 0; i < n - 2; i++) {
                cout << i + 1 << " " << n - 1 << " " << n << endl;
            }
        }
        else {
            vector < int > b = v;
            sort(begin(b), end(b));
            if (b == v) cout << 0 << endl;
            else cout << -1 << endl;
        }
    }
}