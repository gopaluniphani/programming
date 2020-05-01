#include<iostream>
using namespace std;

int main() {
    int c; cin >> c;
    while(c--) {
        long long x, y, n;
        cin >> x >> y >> n;
        long long z = 1;
        while(y > 0) {
            if(y & 1) z = z * x % n;
            x = x * x % n;
            y >>= 1;
        }
        cout << z << endl;
    }
    int t; cin >> t;
    return 0;
}