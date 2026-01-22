#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> a[i];
        }
        
        int res = 0;
        for (int i = 1; i < n; i++) {
            for (int j = a[i] - i; j <= n; j += a[i]) {
                if (i < j && a[i] * a[j] == i + j) {
                    res++;
                }
            }
        }
        cout << res << endl;
    }
}