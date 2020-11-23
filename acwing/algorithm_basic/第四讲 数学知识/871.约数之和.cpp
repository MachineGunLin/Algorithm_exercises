#include<bits/stdc++.h>
using namespace std;

using LL = long long;
const int mod = 1e9 + 7;
unordered_map<int, int> primes;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        for(int i = 2; i <= x / i; ++i) {
            while(x % i == 0) {
                x /= i;
                ++primes[i];
            }
        }
        if(x > 1) {
            ++primes[x];
        }
    }
    LL res = 1;
    for(auto &prime : primes) {
        LL a = prime.first, b = prime.second;
        LL t = 1;
        while(b--) {
            t = (t * a + 1) % mod;
        }
        res = res * t % mod;
    }
    cout << res << endl;
    return 0;
}
