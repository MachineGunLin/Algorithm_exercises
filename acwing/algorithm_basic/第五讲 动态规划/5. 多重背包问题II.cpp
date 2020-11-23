#include<bits/stdc++.h>
using namespace std;

const int N = 11010, M = 2010;
int n, m;
int v[N], w[N];
int f[M];

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    int cnt = 1;
    for(int i = 1; i <= n; ++i) {
        int a, b, s;
        cin >> a >> b >> s;
        int k = 1;
        while(k <= s) {
            v[cnt] = a * k;
            w[cnt] = b * k;
            s -= k;
            k *= 2;
            ++cnt;
        }
        if(s > 0) {
            v[cnt] = s * a;
            w[cnt] = s * b;
            ++cnt;
        }
    }
    for(int i = 1; i <= cnt; ++i) {
        for(int j = m; j>= v[i]; --j) {
            f[j] = max(f[j], f[j - v[i]] + w[i]);
        }
    }
    cout << f[m] <<endl;
    return 0;
}
