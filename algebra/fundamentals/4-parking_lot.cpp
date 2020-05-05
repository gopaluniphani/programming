#include<iostream>
using namespace std;

long long binpow(long long n, long long x) {
    long long res = 1;
    while(x > 0) {
        if(x & 1) res *= n;
        n *= n;
        x >>= 1;
    }
    return res;
}

int main() {
    long long n; cin >> n;
    long long x = binpow(4, n - 3);
    cout << (9 * n - 3) * x << endl;
    return 0;
}