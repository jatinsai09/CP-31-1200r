#include <bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        char ch;
        string s;
        cin >> n >> ch >> s;
        s = "0" + s;

        int ind = -1, flag = 1;
        for (int i = 1; i <= n; i++) {
            if (s[i] == ch) {
                ind = i;
            }
            else {
                flag = 0;
            }
        }
        if (flag) {
            cout << "0\n";
        }
        else if (ind > n / 2) {
            cout << "1\n" << ind << endl;
        }
        else {
            cout << "2\n" << n - 1 << " " << n << endl;
        }
    }

    return 0;
}