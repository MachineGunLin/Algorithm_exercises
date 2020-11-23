#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7;
unordered_map<int, int> primes;
using LL = long long;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    LL res = 1;
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
    for(auto &prime : primes) {
        res = res * (prime.second + 1) % mod;
    }
    cout << res << endl;
    return 0;
}
