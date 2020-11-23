#include<bits/stdc++.h>
using namespace std;

using LL = long long;

const int N = 1e5 + 10;
const int mod = 1e9 + 7;
int fact[N], infact[N];

LL qmi(int a, int k, int p) {
    LL res = 1 % p;
    while(k > 0) {
        if(k & 1) {
            res = (LL)res * a % p;
        }
        a = (LL)a * a % p;
        k >>= 1;
    }
    return res;
}

void init() {
    fact[0] = infact[0] = 1;
    for(int i = 1; i < N; ++i) {
        fact[i] = (LL)fact[i - 1] * i % mod;
        infact[i] = (LL)infact[i - 1] * qmi(i, mod - 2, mod) % mod;
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    init();
    int n;
    cin >> n;
    while(n--) {
        int a, b;
        cin >> a >> b;
        cout << (LL)fact[a] * infact[b] % mod * infact[a - b] % mod << endl;
    }
    return 0;
}
