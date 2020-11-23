#include<bits/stdc++.h>
using namespace std;

using LL = long long;

int exgcd(int a, int b, int &x, int &y) {
    if(b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int d = exgcd(b, a % b, y, x);
    y -= (a / b) * x;
    return d;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--) {
        int a, b, m, x, y;
        cin >> a >> b >> m;
        int d = exgcd(a, m, x, y);
        if(b % d != 0) {
            cout << "impossible" << endl;
        } else {
            cout << (LL)b / d * x % m << endl;
        }
    }
    return 0;
}
