#include <iostream>
using namespace std;

int lastDigit(int a, long long b) {
    if (b == 0) return 1;
    int last = a % 10;
    int pattern[10][4] = {
        {0, 0, 0, 0},
        {1, 1, 1, 1},
        {2, 4, 8, 6},
        {3, 9, 7, 1},
        {4, 6, 4, 6},
        {5, 5, 5, 5},
        {6, 6, 6, 6},
        {7, 9, 3, 1},
        {8, 4, 2, 6},
        {9, 1, 9, 1}
    };
    int len = 4;
    int index = (b - 1) % len;
    return pattern[last][index];
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a;
        long long b;
        cin >> a >> b;
        cout << lastDigit(a, b) << endl;
    }
    return 0;
}




// #include <bits/stdc++.h>
// using namespace std;

// long long Binary_exponential(long long x,long long y, long long mod){
//      long long result = 1;
//      x = x % mod;
//      while(y > 0){
//         if(y % 2 == 1){
//             result = ((result % mod) * (x % mod)) % mod;
//         }
//         x = ((x % mod) * (x % mod)) % mod;
//         y = y / 2;
//      }
//      return result;
// }
// int main()
// {
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         long long x, y;
//         cin >> x >> y;
//         cout << (Binary_exponential(x,y,1e9+7) % 10) << "\n";
//     }
// }