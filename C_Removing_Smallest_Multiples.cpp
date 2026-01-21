#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        string marked(n, '1');
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                for (int j = i + 1; j <= n; j += i + 1) {
                    if (s[j - 1] == '1') {
                        break;
                    }
                   
                    ans += (i + 1) * (marked[j - 1] == '1');
                    marked[j - 1] = '0';
                }
            }
        }
        cout << ans << "\n";
    }
}