#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
const int mod = 1e9 + 7;
int dp[N][N];
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i <= n; ++i) {
        dp[i][0] = 1;
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 0; j <= n; ++j) {
            dp[i][j] = dp[i - 1][j] % mod;
            if(j >= i) {
                dp[i][j] = (dp[i - 1][j] + dp[i][j - i]) % mod;
            }
        }
    }
    cout << dp[n][n] << endl;
    return 0;
}
