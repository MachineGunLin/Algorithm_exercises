#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int w[N], v[N];
int f[N];
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> w[i] >> v[i];
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = w[i]; j <= m; ++j) {
            f[j] = max(f[j], f[j - w[i]] + v[i]);
        }
    }
    cout << f[m] << endl;
    return 0;
}
