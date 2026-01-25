#include<bits/stdc++.h>

using namespace std;
#define int long long int
int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        map < int, vector < int >> a;
        set < int > s;
        for (int i = 0; i < n; i++) {
            cin >> x;
            a[x].push_back(i + 1);
            s.insert(x);
        }
        if (s.size() == 1) {
            cout << "NO\n";
            continue;
        }
        cout << "YES\n";

        vector < vector < int >> other;
        for (auto& i: a) {
            other.push_back(i.second);
        }
        
        int m = other.size();
        for (int i = 1; i < m; i++) {
            for (auto& j: other[i]) {
                cout << other[0][0] << " " << j << endl;
            }
        }

        for (int j = 1; j < other[0].size(); j++) {
            cout << other[0][j] << " " << other[1][0] << endl;
        }
    }
}