#include<bits/stdc++.h>
using namespace std;

const int N = 20;
int w[N][N];
int dp[1 << N][N];
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(dp, 0x3f, sizeof dp);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> w[i][j];
        }
    }
    dp[1][0] = 0;
    for(int i = 0; i < 1 << n; ++i) {
        for(int j = 0; j < n; ++j) {
            if(i >> j & 1) {
                for(int k = 0; k < n; ++k) {
                    if(i >> k & 1) {
                        dp[i][j] = min(dp[i][j], dp[i - (1 << j)][k] + w[k][j]);
                    }
                }
            }
        }
    }
    cout << dp[(1 << n) - 1][n - 1] << endl;
    return 0;
}
