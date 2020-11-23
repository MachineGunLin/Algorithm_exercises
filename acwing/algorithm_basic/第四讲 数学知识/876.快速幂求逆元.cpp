#include<bits/stdc++.h>
using namespace std;

using LL = long long;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

LL qmi(int a, int k, int p) {
    LL res = 1 % p;
    while(k > 0) {
        if(k & 1) {
            res = res * a % p;
        }
        a = a * (LL)a % p;
        k >>= 1;
    }
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        int a, p;
        cin >> a >> p;
        if(gcd(a, p) == 1) {
            cout << qmi(a, p - 2, p) << endl;
        } else {
            cout << "impossible" << endl;
        }
    }
    return 0;
}
