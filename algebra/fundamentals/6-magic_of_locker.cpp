#include<iostream>
using namespace std;

long long mod = 1000000007;

long long binpow(long long a, long long b) {
    long long res = 1;
    while(b > 0) {
        if(b & 1) res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, c, x, sol;
        cin >> n;
        if(n == 1) {
            cout << 1 << endl;
            continue;
        }
        c = n % 3;
        if(c == 2) x = n - 2;
        else if(c == 1) x = n - 4;
        else x = n;
        sol = binpow(3, x / 3);
        if(c == 1) sol = sol * 4 % mod;
        else if(c == 2) sol = sol * 2 % mod;
        cout << sol << endl;
    }
}