#include<bits/stdc++.h>
using namespace std;

const int N = 3010;
int dp[N][N];
int n;
int A[N], B[N];

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> A[i];
    }
    for(int i = 1; i <= n; ++i) {
        cin >> B[i];
    }
    for(int i = 1; i <= n; ++i) {
        int maxv = 1;
        for(int j = 1; j <= n; ++j) {
            dp[i][j] = dp[i - 1][j];
            if(A[i] == B[j]) {
                dp[i][j] = max(dp[i][j], maxv);
            }
            if(A[i] > B[j]) {
                maxv = max(maxv, dp[i - 1][j] + 1);
            }
        }
    }
    int res = 0;
    for(int i = 1; i <= n; ++i) {
        res = max(res, dp[n][i]);
    }
    cout << res << endl;
    return 0;
}
