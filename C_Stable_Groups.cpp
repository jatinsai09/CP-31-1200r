#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int n, k, x;
    cin >> n >> k >> x;
    vector < int > a(n), d;
    for (auto & i: a) {
        cin >> i;
    }
    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        if (a[i] - a[i - 1] > x) {
            d.push_back(a[i] - a[i - 1]);
        }
    }
    sort(begin(d), end(d));
    
    int sz = d.size(), c = 0;
    for (auto& i: d) {
        if ((i - 1) / x <= k) {
            k -= (i - 1) / x;
            c++;
        }
    }
    cout << sz + 1 - c << "\n";

}