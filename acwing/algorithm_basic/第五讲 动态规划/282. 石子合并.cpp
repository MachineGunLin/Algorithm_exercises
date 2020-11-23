#include<bits/stdc++.h>
using namespace std;

const int N = 310;
int stones[N];
int preSum[N];
int dp[N][N];
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    memset(dp, 0x3f, sizeof dp);
    for(int i = 1; i <= n; ++i) {
        dp[i][i] = 0;
        cin >> stones[i];
        preSum[i] = preSum[i - 1] + stones[i];
    }
    for(int len = 2; len <= n; ++len) {
        for(int l = 1; l + len - 1 <= n; ++l) {
            int r = l + len - 1;
            for(int k = l; k < r; ++k) {
                dp[l][r] = min(dp[l][r], dp[l][k] + dp[k + 1][r] + preSum[r] - preSum[l - 1]);
            }
        }
    }
    cout << dp[1][n] << endl;
    return 0;
}
