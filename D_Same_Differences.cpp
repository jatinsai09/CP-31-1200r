#include <bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0;
        cin >> n;
        vector < int > a(n);
        map < int, int > mp;
        for (int j = 0; j < n; j++) {
            cin >> a[j];
            c += mp[a[j] - j];
            mp[a[j] - j]++;
        }
        cout << c << endl;
    }
    return 0;
}