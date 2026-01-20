#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > v(n);
        for (auto & i: v) {
            cin >> i;
        }
        
        int l = 0, r = n - 1, mini = 1, maxi = n;
        int flag = 0;
        while (l < r) {
            if (v[l] != maxi && v[l] != mini && v[r] != maxi && v[r] != mini) {
                flag = 1;
                break;
            }
            if (v[l] == maxi || v[r] == maxi) {
                (v[l] == maxi) ? l++ : r--;
                maxi--;
            }
            if (v[l] == mini || v[r] == mini) {
                (v[l] == mini) ? l++ : r--;
                mini++;
            }
        }
        if (flag) {
            cout << l + 1 << " " << r + 1 << "\n";
        }
        else {
            cout << -1 << "\n";
        }
    }
}