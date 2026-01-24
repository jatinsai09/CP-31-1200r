#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        k--;
        if (n % 2 == 0) {
            int res = k % n;
            cout << res + 1 << "\n";
        }
        else {
            int skip = n / 2, res = (k + (k / skip)) % n;
            cout << res + 1 << "\n";
        }
    }
}