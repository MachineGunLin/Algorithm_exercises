#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int cost[N][N];
int dp[N][N];
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            cin >> cost[i][j];
        }
    }
    dp[0][0]= cost[0][0];
    for(int i = 1; i < n; ++i) {
        dp[i][0] = dp[i - 1][0] + cost[i][0];
    }
    for(int j = 1; j < n; ++j) {
        dp[0][j] = dp[0][j - 1] + cost[0][j];
    }
    for(int i = 1; i < n; ++i) {
        for(int j = 1; j < n; ++j) {
            dp[i][j] = min(dp[i - 1][j], dp[i][j - 1]) + cost[i][j];
        }
    }
    cout << dp[n - 1][n - 1] << endl;
    return 0;
}
