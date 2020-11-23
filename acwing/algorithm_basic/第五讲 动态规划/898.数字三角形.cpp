#include<bits/stdc++.h>
using namespace std;

const int N = 510;
int nums[N][N];
int dp[N][N];
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            cin >> nums[i][j];
            if(j == 1) {
                dp[i][j] = dp[i - 1][j] + nums[i][j];
            } else if(j == i) {
                dp[i][j] = dp[i - 1][j - 1] + nums[i][j];
            } else {
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + nums[i][j];
            }
        }
    }
    int res = INT_MIN;
    for(int i = 1; i <= n; ++i) {
        res = max(res, dp[n][i]);
    }
    cout << res << endl;
    return 0;
}
