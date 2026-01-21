#include<bits/stdc++.h>

using namespace std;

#define int long long int
int32_t main() {
    int tc = 1;
    //cin>>tc;
    while (tc--) {
        int n, q;
        cin >> n >> q;

        vector < int > v(n + 1);
        map < int, int > mp;
        int def, sum = 0;
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            sum += v[i];
            mp[i] = v[i];
        }

        while (q--) {
            int t, val;
            cin >> t;
            if (t == 1) {
                int ind;
                cin >> ind >> val;

                sum -= (mp[ind] ? mp[ind] : def);
                mp[ind] = val;
                sum += mp[ind];
            }
            else {
                cin >> val;
                mp.clear();
                
                def = val;
                sum = n * val;
            }
            cout << sum << endl;
        }
    }
}