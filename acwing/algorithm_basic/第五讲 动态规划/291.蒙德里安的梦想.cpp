#include<bits/stdc++.h>
using namespace std;

using LL = long long;
const int N = 12;
LL dp[N][1 << N];
bool st[1 << N];
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    while(cin >> n >> m, n || m) {
        for(int i = 0; i < 1 << m; ++i) {
            st[i] = true;
            int cnt = 0;
            for(int j = 0; j < m; ++j) {
                if(i >> j & 1) {
                    if(cnt & 1) {
                        st[i] = false;
                    }
                    cnt = 0;
                } else {
                    ++cnt;
                }
            }
            if(cnt & 1) {
                st[i] = false;
            }
        }
        memset(dp, 0, sizeof dp);
        dp[0][0] = 1;
        for(int i = 1; i <= n; ++i) {
            for(int j = 0; j < 1 << m; ++j) {
                for(int k = 0; k < 1 << m; ++k) {
                    if((j & k) == 0 && st[j | k]) {
                        dp[i][j] += dp[i - 1][k];
                    }
                }
            }
        }
        cout << dp[n][0] << endl;
    }
    return 0;
}
