
# mod means  0 to m-1

# positive
# (a + b) % m = (a % m + b % m) % m;

(18 + 19) % 10 = 37 % 10 == 7

(18 % 10) + (19 % 10) = 8 + 9 = 17 % 10 = 7


# negative
# -4 % 6 = (6 - 4) % 6

# -b % m = (m - b) % m;


# 3no  

# -59 % 6

How can you solve this

(-59 % 6 + 6) % 6;

main law

# (a % m + m) % m;



Products

# (a * b) % m = (a % m * b % m) % m;

Division

# (a / b) % m = (a % m * pow(b, m- 2) % m) % m;

যদি m একটি prime number, তাহলে:

if m is prime number then b-1 % m = b^(m - 2) % m;


<!-- pow -->

#include <iostream>
using namespace std;

long long power(long long a, long long b) {
    long long result = 1;
    while(b > 0) {
        if(b % 2 == 1) result *= a;
        a *= a;
        b /= 2;
    }
    return result;
}

int main() {
    cout << power(10, 10) << endl;
    return 0;
}
