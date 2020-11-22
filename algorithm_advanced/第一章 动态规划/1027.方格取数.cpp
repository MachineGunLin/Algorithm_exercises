#include<bits/stdc++.h>
using namespace std;

const int N = 12;
int lattice[N][N];
int dp[N << 1][N][N];
int n;
int row, col, val;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    while(cin >> row >> col >> val, row || col || val) {
        lattice[row][col] = val;
    }
    for(int k = 2; k <= n << 1; ++k) {
        for(int i1 = 1; i1 <= n; ++i1) {
            for(int i2 = 1; i2 <= n; ++i2) {
                int j1 = k - i1, j2 = k - i2;
                if(1 <= j1 && j1 <= n && 1 <= j2 && j2 <= n) {
                    int t = lattice[i1][j1];
                    if(i1 != i2) {
                        t += lattice[i2][j2];
                    }
                    dp[k][i1][i2] = max(dp[k][i1][i2], max(max(dp[k - 1][i1 - 1][i2 - 1], dp[k - 1][i1][i2]) + t, max(dp[k - 1][i1][i2 - 1], dp[k - 1][i1 - 1][i2]) + t));
                }
            }
        }
    }
    cout << dp[n << 1][n][n] << endl;
    return 0;
}
