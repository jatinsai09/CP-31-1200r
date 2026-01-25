#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, res = 0;
        cin >> n;
        vector < int > v(n), mf(31);
        for (auto & i: v) {
            cin >> i;
            int msb = log2(i);
            res += mf[msb];
            mf[msb]++;
        }
        
        cout << res << "\n";
    }

}