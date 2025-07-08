
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

✅ Fermat’s Little Theorem:
Fermat’s theorem বলে:

যদি m হয় একটি prime সংখ্যা এবং b এমন হয় যাতে gcd(b, m) = 1 (অর্থাৎ b আর m পরস্পরের সহমৌলিক),
তাহলে:

b^(m - 1) = 1 (mod m)

b^(m - 2) = b^1 (mod m)

(a / b) % m = b^-1 % m = pow(b, m- 2)

# (a / b) % m = (a % m * pow(b, m- 2) % m) % m;

যদি m একটি prime number, তাহলে:

if m is prime number then b-1 % m = b^(m - 2) % m;


<!-- pow -->

long long power(long long a, long long b, long long m) {
    long long result = 1;
    a %= m;
    while (b > 0) {
        if (b % 2 == 1) {
            result = (result * a) % m;
        }
        a = (a * a) % m;
        b /= 2;
    }
    return result;
}


# x % 2^k = x & (2^k - 1)

mod 0 to (2^k - 1) er modddhe thakbe

2^k means last = k bit 

2^3 = 8 = 1000
last 3 bits 000
er maximum = 111.

k = 3

x % 8  (0 to 7)

7 means 3 bits 
111

so x er last 3 bits lagbe amar oi 3 bits je answer dibe oitai answer

so 10 % 8  = 1010  = 010 = 2

11 % 8 = 1011 = 011 = 3


# a^b % 2^64

a % 2^32

if  take it unsinged why work this

# unsigned int it always 0 theke 2^32 - 1  rakhe overflow hole mode kore.

2^32 % 2^32 = 0.

unsigned long long 0 to 2^64 - 1 porjonto rakhe.


# why always mod 1e9 + 7 or 9982443537

10^9 + 7 which full feel 10^9 numbers and smallest and nearest prime of 10^9+7 then 10^9 + 9


# Fun problem

given that n = 1e5 and a <= 1e9

find max (ai % aj)

3 5 5 6

answer 5

# onek hard problem e kaje lagbe.
