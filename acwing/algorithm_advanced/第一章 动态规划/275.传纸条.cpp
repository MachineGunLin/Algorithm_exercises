#include<bits/stdc++.h>
using namespace std;

const int N = 55;
int mates[N][N];
int dp[N << 1][N][N];
int n, m;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> mates[i][j];
        }
    }
    for(int k = 2; k <= n + m; ++k) {
        for(int i1 = 1; i1 <= n; ++i1) {
            for(int i2 = 1; i2 <= n; ++i2) {
                int j1 = k - i1, j2 = k - i2;
                if(1 <= j1 && j1 <= m && 1 <= j2 && j2 <= m) {
                    int t = mates[i1][j1];
                    if(i1 != i2 || k == 2 || k == n + m) {
                        t += mates[i2][j2];
                    }
                    dp[k][i1][i2] = max(dp[k][i1][i2], max(max(dp[k - 1][i1][i2], dp[k - 1][i1 - 1][i2 - 1]), max(dp[k - 1][i1][i2 - 1], dp[k - 1][i1 - 1][i2])) + t);
                }
            }
        }
    }
    cout << dp[n + m][n][n] << endl;
    return 0;
}
