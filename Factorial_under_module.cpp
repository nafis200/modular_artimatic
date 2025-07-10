#include <bits/stdc++.h>
using namespace std;
int main()
{
    int mod = 998244353;
    int n;
    cin >> n;
    int ans = 1;
    for (int i = 1; i <= n; i++)
    {
        ans = (1LL *
               (ans % mod) * (i % mod)) %
              mod;
    }

    cout << ans << "\n";
}