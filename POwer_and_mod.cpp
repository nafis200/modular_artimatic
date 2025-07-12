#include <bits/stdc++.h>
using namespace std;


unsigned long long binary_exponential(unsigned long long a, unsigned long long b, unsigned long long mod) {
    unsigned long long ans = 1;
    a = a % mod;
    
    while (b > 0) {
        if (b & 1) {
            ans = (__uint128_t(ans) * a) % mod;
        }
        a = (__uint128_t(a) * a) % mod;
        b /= 2;
    }

    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        unsigned long long a, b, m;
        cin >> a >> b >> m;
        cout << binary_exponential(a, b, m) << "\n";
    }
}
