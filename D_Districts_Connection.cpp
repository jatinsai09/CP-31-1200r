#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
    
        set < int > s;
        vector<int> a(n);
        int i1 = -1, in1 = -1, c1 = -1, c2 = -1;
        for (int i = 0; i < n; i++) {
            cin >> x;
            if (s.find(x) == s.end()) {
                if (i1 == -1) {
                    i1 = i;
                    c1 = x;
                }
                else if (in1 == -1 && x != c1) {
                    in1 = i;
                    c2 = x;
                }
            }
            s.insert(x);
            a[i] = x;
        }
        if (s.size() == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";

        for (int i = 0; i < n; i++) {
            if (a[i] != c1) {
                cout << i1 + 1 << " " << i + 1 << "\n";
            }
            else if (i != i1) {
                cout << in1 + 1 << " " << i + 1 << "\n";
            }
        }
    }
}
