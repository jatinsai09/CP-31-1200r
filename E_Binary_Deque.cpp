#include<bits/stdc++.h>

using namespace std;
#define int long long int

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, s, sum = 0, maxi = 0;
        cin >> n >> s;
        
        vector < int > v(n), f(n + 1, -2);
        f[0] = -1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            
            sum += v[i];
            if (f[sum] == -2) {
                f[sum] = i;
            }
            if (sum >= s) {
                int p = sum - s;
                maxi = max(maxi, i - f[p]);
            }
        }
        
        cout << (sum < s ? -1 : n - maxi) << endl;
    }
}