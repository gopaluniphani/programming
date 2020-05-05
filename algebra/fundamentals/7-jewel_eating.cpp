#include<iostream>
using namespace std;

long long binpow(int a, int b, int m) {
    a = a % m;
    b = b % (m - 1);
    long long sol = 1;
    while(b > 0) {
        if(b & 1) sol = sol * a %m;
        a = a * a % m;
        b >>= 1;
    }
    return sol;
}

int main() {
    while(1) {
        unsigned long long x, alpha, n, c;
        cin >> x >> alpha >> n >> c;
        if(x == 0 && alpha == 0 && n == 0 && c == 0) break;
        
        unsigned long long a_n = binpow(alpha, n, c);
        unsigned long long res = ((alpha % c * (a_n - 1)) / (alpha % c - 1)) % c;
        res = (a_n * (x % n)) 
    }
}