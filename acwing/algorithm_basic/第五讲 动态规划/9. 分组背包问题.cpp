#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int w[N][N], v[N][N], s[N];
int f[N];
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> s[i];
        for(int j = 0; j < s[i]; ++j) {
            cin >> w[i][j] >> v[i][j];
        }
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = m; j >= 0; --j) {
            for(int k = 0; k < s[i]; ++k) {
                if(w[i][k] <= j) {
                    f[j] = max(f[j], f[j - w[i][k]] + v[i][k]);
                }
            }
        }
    }
    cout << f[m] << endl;
    return 0;
}
