#include<bits/stdc++.h>

using namespace std;

#define int long long int

void solve() {
    int n;
    string s;
    cin >> n >> s;
    unordered_map < string, int > mp;
    string ss;

    for (int i = 0; i < n; i++) {
        ss = "";
        for (int j = i; j < n; j++) {
            ss += s[j];
            mp[ss]++;
        }
    }

    for (int i = 0; i < 26; i++) {
        ss = ('a' + i);
        if (!mp[ss]) {
            cout << ss << endl;
            return;
        }
    }


    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            ss = ('a' + i);
            ss += ('a' + j);
            if (!mp[ss]) {
                cout << ss << endl;
                return;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < 26; j++) {
            for (int k = 0; k < 26; k++) {
                ss = ('a' + i);
                ss += ('a' + j);
                ss += ('a' + k);
                if (!mp[ss]) {
                    cout << ss << endl;
                    return;
                }
            }
        }
    }

}
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}