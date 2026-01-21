#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        char a[n][n];
        int vis[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
                vis[i][j] = -1;
            }
        }
        
        int res = 0, c1, c0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (vis[i][j] == 1) {
                    continue;
                }

                c1 = 0, c0 = 0;
                int curx = i, cury = j;

                (a[i][j] == '1' ? c1++ : c0++);
                vis[i][j] = 1;
    
                for (int i = 0; i < 3; i++) {
                    int nx = cury, ny = n - curx - 1;
                    (a[nx][ny] == '1' ? c1++ : c0++);
                    vis[nx][ny] = 1;
                    
                    curx = nx;
                    cury = ny;
                }

                res += min(c1, c0);
            }
        }
        cout << res << "\n";
    }
}