#include<bits/stdc++.h>
using namespace std;

using LL = long long;

LL qmi(int a, int k, int p) {
    LL res = 1 % p;
    while(k) {
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
        int a, k, p;
        cin >> a >> k >> p;
        cout << qmi(a, k, p) << endl;
    }
    return 0;
}
