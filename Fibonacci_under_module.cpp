#include<bits/stdc++.h>
using namespace std;
int main(){
    int mod = 998244353;
    int n; cin >> n;
    long long a = 1, b = 1;
    long long answer = 1;

    for(int i = 3; i <= n; i++){
         answer = ((a % mod) + (b % mod)) % mod;
         a = b % mod;
         b = answer % mod;
    }

    cout << answer << "\n";
}