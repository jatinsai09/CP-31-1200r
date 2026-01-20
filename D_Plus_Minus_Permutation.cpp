#include<bits/stdc++.h>

using namespace std;

#define int long long int

int sum(int k) {
    return (k * (k + 1)) / 2;
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x, y;
        cin >> n >> x >> y;
        
        int LCM = (x * y) / __gcd(x, y);

        int a = n / x - n / LCM; // count of multiples of x but not y
        int b = n / y - n / LCM; // count of multiples of y but not x
        
        // assign a largest integers to x-only positions
        // assign b smallest integers to y-only positions
        cout << (sum(n) - sum(n - a)) - sum(b) << endl;
    }
}