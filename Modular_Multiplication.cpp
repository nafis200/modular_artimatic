#include<bits/stdc++.h>
using namespace std;
int main(){
    long long a, b; 
    int Case = 1;
    long long mod = 10000007;
    while(cin >> a >> b){
       long long ans = ((a % mod) * (b % mod))%mod;
       ans = ans;
       cout << "Case #" << Case <<": " << ans << "\n";
       Case++;
    }
}