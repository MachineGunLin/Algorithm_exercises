#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N][N];
int n, m;
string a, b;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    cin >> a;
    cin >> m;
    cin >> b;
    for(int i = 0; i <= n; ++i) {
        dp[i][0] = i;
    }
    for(int i = 0; i <= m; ++i) {
        dp[0][i] = i;
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(a[i - 1] == b[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
            }
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
