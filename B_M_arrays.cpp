#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector < int > a(n);
        map < int, int > mp;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            a[i] = a[i] % m;
            mp[a[i]]++;
        }
        int c = 0;

        for (auto& i: mp) {
            int r1 = i.first, f = i.second;
            if (r1 == 0 || r1 == m - r1) {
                c += (f > 0);
                continue;
            }

            int r2 = m - r1;
            if (mp.count(r2) == 0) {
                c += f;
                continue;
            }

            if (r1 > r2) {
                continue;
            }

            int f2 = mp[r2];
            if (abs(f - f2) <= 1) c++;
            else c += 1 + abs(f - f2) - 1;
            
        }
        cout << c << "\n";
    }
}