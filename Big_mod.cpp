#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<long long>v(10000009,1);
    long long mod = 109546051211;
    for(long long i = 2; i <=10000000; i++){
         v[i] = (1LL * (v[i - 1] % mod) * (i % mod)) % mod;
    }

    long long n; cin >> n;
    long long ans = 1;

    for(long long i = 1; i <= n; i++){
        ans = (1LL * (ans % mod) * (v[i] % mod)) % mod;
    }

    cout << ans << "\n";
}