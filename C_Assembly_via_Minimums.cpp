#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int n1 = (n * (n - 1)) / 2;

        vector < int > b(n1);
        for (auto & i: b) {
            cin >> i;
        }
        sort(begin(b), end(b));

        for (int i = 0, k = n - 1; i < n1; i += k--) {
            cout << b[i] << " ";
        }
        cout << b[n1 - 1] << "\n";
    }
}