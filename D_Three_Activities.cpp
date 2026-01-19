#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n), b(n), c(n);
        vector < pair < int, int >> va, vb, vc;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
            va.emplace_back(a[i], i);
        }

        for (int i = 0; i < n; i++) {
            cin >> b[i];
            vb.emplace_back(b[i], i);
        }

        for (int i = 0; i < n; i++) {
            cin >> c[i];
            vc.emplace_back(c[i], i);
        }

        sort(va.rbegin(), va.rend());
        sort(vb.rbegin(), vb.rend());
        sort(vc.rbegin(), vc.rend());

        int maxi = INT_MIN;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (vb[j].second != va[i].second) {
                    for (int k = 0; k < 3; k++) {
                        if (vc[k].second != va[i].second && vc[k].second != vb[j].second) {
                            maxi = max(maxi, va[i].first + vb[j].first + vc[k].first);
                        }
                    }
                }
            }
        }
        cout << maxi << "\n";
    }
}