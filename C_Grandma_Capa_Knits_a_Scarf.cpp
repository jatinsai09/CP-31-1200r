#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        int ans = 1e9;
        for (int i = 'a'; i <= 'z'; i++) {
            int change = 0, l = 0, r = n - 1;
            while (l < r) {
                if (s[l] != s[r]) {
                    if (s[l] == i) {
                        l++;
                        change++;
                    }
                    else if (s[r] == i) {
                        r--;
                        change++;
                    }
                    else {
                        change = 1e9;
                        break;
                    }
                }
                else {
                    l++;
                    r--;
                }
            }
            ans = min(ans, change);
        }
        if (ans == 1e9) cout << "-1\n";
        else cout << ans << "\n";
    }


}