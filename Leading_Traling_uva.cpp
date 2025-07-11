#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

long long mod_pow(long long base, long long exp, long long mod) {
    long long result = 1;
    base %= mod;
    while (exp > 0) {
        if (exp % 2 == 1) result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;

     
        int trailing = mod_pow(n, k, 1000);

    
        double x = k * log10(n);
        double y = x - floor(x);
        int leading = (int)(pow(10.0, y) * 100);

        printf("%d...%03d\n", leading, trailing);
    }
    return 0;
}


// Step1: Logarithn diye n^k 

// log10(n^k) = k * log10(n)

// if n = 123456 k = 2

// then 

// log(123456^2) = 2 * log10(123456)

// 10.182

// now just separate fraction part 

// 10.182 - 10 = .182

// now  10^.182 = 1.524

// Now get first 3 digit 1.524 * 100 = 152

