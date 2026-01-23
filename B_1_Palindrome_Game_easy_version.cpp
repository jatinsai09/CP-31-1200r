#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int c0 = 0;
        for (auto& ch: s) {
            if (ch == '0') {
                c0++;
            }
        }
        if (c0 == 0) cout << "DRAW\n";
        else if (c0 == 1 || c0 % 2 == 0) cout << "BOB\n";
        else cout << "ALICE\n";
    }
    return 0;
}