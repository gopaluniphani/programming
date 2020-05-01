#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int first_three(long long x, long long y) {
    long double product = y * log10(x);
    long double decimal = product - floor(product);
    long double sol = pow(10, decimal);
    while(sol < 100) sol *= 10;
    return sol;
}

int last_three(long long x, long long y) {
    int res = 1;
    while(y) {
        if(y & 1) res = res * x % 1000;
        x = x * x % 1000;
        y >>= 1;
    }
    return res;
}

int main() {
    int t; cin >> t;
    while(t--) {
        long long x, y;
        cin >> x >> y;
        int lead = first_three(x, y);
        int trail = last_three(x, y);
        cout << lead << "..." << setw(3) << setfill('0') << trail << endl;
    }
}