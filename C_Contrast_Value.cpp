#include<bits/stdc++.h>

using namespace std;

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0, slope = 0;
        cin >> n;
        vector < int > v(n);
        for (auto & i: v) {
            cin >> i;
        }
        if (n == 1) {
            cout << 1 << "\n";
            continue;
        }

        for (int i = 1; i < n; i++) {
            if (v[i - 1] < v[i] && slope != 1) {
                slope = 1;
                c++;
            }
            else if (v[i - 1] > v[i] && slope != -1) {
                slope = -1;
                c++;
            }
        }
        cout << c + 1 << endl;
    }
}