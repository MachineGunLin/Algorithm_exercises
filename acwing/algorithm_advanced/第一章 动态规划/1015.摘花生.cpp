#include<bits/stdc++.h>
using namespace std;

const int N = 105;
int peanuts[N][N];
int dp[N][N];
int T, R, C;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(dp, 0, sizeof dp);
    cin >> T;
    while(T--) {
        cin >> R >> C;
        for(int i = 0; i < R; ++i) {
            for(int j = 0; j < C; ++j) {
                cin >> peanuts[i][j];
            }
        }
        dp[0][0] = peanuts[0][0];
        for(int i = 1; i < R; ++i) {
            dp[i][0] = dp[i - 1][0] + peanuts[i][0];
        }
        for(int j = 1; j < C; ++j) {
            dp[0][j] = dp[0][j - 1] + peanuts[0][j];
        }
        for(int i = 1; i < R; ++i) {
            for(int j = 1; j < C; ++j) {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]) + peanuts[i][j];
            }
        }
        cout << dp[R - 1][C - 1] << endl;
    }
    return 0;
}
