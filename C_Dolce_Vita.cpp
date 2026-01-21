#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, c = 0;
        cin >> n >> x;

        vector < int > v(n), psum(n);
        int sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++) {
            sum += v[i];
            psum[i] = sum;
        }
        int day = 0;

        for (int i = n - 1; i >= 0; i--) {
            psum[i] += (i + 1) * day;
            if (x - psum[i] >= 0) {
                int days = (x - psum[i]) / (i + 1) + 1;
                c += ((i + 1) * days);
                day += days;
            }
        }
        cout << c << endl;
    }
}