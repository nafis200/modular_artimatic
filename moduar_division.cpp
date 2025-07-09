#include <bits/stdc++.h>
using namespace std;

long long Binary_exponential(long long x, long long y, long long mod)
{
    long long result = 1;
    x = x % mod;
    while (y > 0)
    {
        if (y % 2 == 1)
        {
            result = ((result % mod) * (x % mod)) % mod;
        }
        x = ((x % mod) * (x % mod)) % mod;
        y = y / 2;
    }
    return result;
}
int main()

{
    long long x, y, z;
    cin >> x >> y >> z;
    cout << (1LL * ( x % z)* (Binary_exponential(y, z - 2, z) % z)) % z << "\n";
}