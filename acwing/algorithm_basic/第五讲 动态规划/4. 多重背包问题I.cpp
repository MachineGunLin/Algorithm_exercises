#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int w[N], v[N], s[N];
int f[N][N];
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> w[i] >> v[i] >> s[i];
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j <= m; ++j) {
            for(int k = 0; k <= s[i] && k * w[i] <= j; ++k) {
                f[i][j] = max(f[i][j], f[i - 1][j - k * w[i]] + k * v[i]);
            }
        }
    }
    cout << f[n][m] << endl;
    return 0;
}
