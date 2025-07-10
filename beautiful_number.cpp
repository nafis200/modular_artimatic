#include <iostream>
using namespace std;

const int MOD = 1000000007;
const int MAX = 1000005;

long long fact[MAX], invFact[MAX];


long long modPow(long long a, long long b, long long m) {
    long long res = 1;
    a %= m;
    while (b) {
        if (b & 1)
            res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

void precompute() {
    fact[0] = 1;
    for (int i = 1; i < MAX; i++) {
        fact[i] = fact[i - 1] * i % MOD;
    }
    invFact[MAX - 1] = modPow(fact[MAX - 1], MOD - 2, MOD);
    for (int i = MAX - 2; i >= 0; i--) {
        invFact[i] = invFact[i + 1] * (i + 1) % MOD;
    }
}

long long nCr(int n, int r) {
    if (r < 0 || r > n) return 0;
    return fact[n] * invFact[r] % MOD * invFact[n - r] % MOD;
}

bool isGood(int x, int a, int b) {
    while (x > 0) {
        int d = x % 10;
        if (d != a && d != b) return false;
        x /= 10;
    }
    return true;
}

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    precompute();

    long long result = 0;
    for (int i = 0; i <= n; i++) {
        int sum = i * a + (n - i) * b;
        if (isGood(sum, a, b)) {
            result = (result + nCr(n, i)) % MOD;
        }
    }

    cout << result << endl;
    return 0;
}
