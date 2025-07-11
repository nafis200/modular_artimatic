#include <bits/stdc++.h>
using namespace std;
const long long mod = 1e9 + 7;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long x;
        string s;
        cin >> x >> s;

        long long len = (int)s.size() - 1;

        long long total_length = 0;

        for (long long i = 1; i <= x; i++)
        {
            total_length = (1LL * ((i) % mod + (len * (s[i - 1] - '0')) % mod)) % mod;

            len =  (1LL * (((total_length % mod) - ((i + 1) % mod)) + mod)%mod) % mod;

            if (s.size() < x)
            {
                string extra = s.substr(i);

                long long increase_length = s[i - 1] - '0';
                for (long long j = 1; j < increase_length; j++)
                {
                    s += extra;
                }
            }
        }
        cout << total_length << "\n";
    }
}