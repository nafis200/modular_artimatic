



//  if (n >= 31)
// কারণ 2^31 = 2147483648

// আর প্রশ্নে বলা আছে m এর সর্বোচ্চ মান 10^8 = 100000000

// তাহলে যদি n ≥ 31 হয়, তাহলে 2^n > m

// সেক্ষেত্রে m % (2^n) = m হবে সবসময় কারণ ছোট সংখ্যাকে বড় দিয়ে ভাগ করলে ভাগশেষ হয় সেই ছোট সংখ্যাটাই।




#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (n >= 31) {
        cout << m << endl;
    } else {
        int power = 1 << n; 
        cout << m % power << endl;
    }

    return 0;
}

