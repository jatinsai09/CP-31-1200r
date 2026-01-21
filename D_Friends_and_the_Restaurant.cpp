#include<bits/stdc++.h>

using namespace std;

#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n), b(n), d(n);

        for (auto & i: a) {
            cin >> i;
        }
        for (auto & i: b) {
            cin >> i;
        }

        for (int i = 0; i < n; i++) {
            d[i] = b[i] - a[i];
        }

        sort(d.begin(), d.end());
        int i = 0, j = n - 1, c = 0, sum;

        while (i < j) {
            sum = d[i] + d[j];
            if (sum < 0) i++;
            else c++, i++, j--;
        }
        cout << c << endl;
    }
}