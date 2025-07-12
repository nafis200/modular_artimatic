#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); 
    cout.tie(0);
 
    int n, m;
    cin >> n >> m;

    if(n == m){
         cout << "=" << "\n";
        return 0;
    }
 
    double x = m * log(n);
    double y = n * log(m);
 
    if (fabs(x - y) < 1e-14) {
        cout << "=\n";
    }
    else if (x < y) {
        cout << "<\n";
    }
    else {
        cout << ">\n";
    }
 
    return 0;
}



// if(n == m) is not given why give error