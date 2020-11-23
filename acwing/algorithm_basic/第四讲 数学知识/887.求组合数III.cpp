#include<bits/stdc++.h>
using namespace std;

using LL = long long;

LL qmi(int a, int k, int p) {
    LL res = 1 % p;
    while(k) {
        if(k & 1) {
            res = (LL)res * a % p;
        }
        a = (LL) a * a % p;
        k >>= 1;
    }
    return res;
}

int C(int a, int b, int p) {
    if(a < b) {
        return 0;
    }
    int res = 1;
    for(int i = 1, j = a; i <= b; ++i, --j) {
        res = (LL)res * j % p;
        res = (LL)res * qmi(i, p - 2, p) % p;
    }
    return res;
}

int Lucas(LL a, LL b, int p) {
    if(a < p && b < p) {
        return C(a, b, p);
    }
    return (LL)C(a % p, b % p, p) * Lucas(a / p, b / p, p) % p;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        LL a, b;
        int p;
        cin >> a >> b >> p;
        cout << Lucas(a, b, p) << endl;
    }
    return 0;
}
