#include<iostream>
using namespace std;

int main() {
    while(1) {
        long long x, y, z;
        if(scanf("%lld%lld%lld", &x, &y, &z) == EOF) break;
        
        long long res = 1;
        while(y > 0) {
            if(y & 1) res = res * x % z;
            x = x * x % z;
            y >>= 1;
        }
        cout << res << endl;
        string str;
        getline(cin, str);
    }
    return 0;
}