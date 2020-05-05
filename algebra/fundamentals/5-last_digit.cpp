#include<iostream>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long a, b;
        cin >> a >> b;
        long long res = 1;
        while(b > 0) {
            if(b & 1) res = res * a % 10;
            a = a * a % 10;
            b >>= 1;
        }
        cout << res << endl;
    }
    return 0;
}