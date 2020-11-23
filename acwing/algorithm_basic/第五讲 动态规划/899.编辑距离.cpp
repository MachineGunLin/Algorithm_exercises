#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
const int M = 15;
char s[N][M];
int dp[N][N];
int n, m;

int convert(char s[], char q[]) {
    int n = strlen(s + 1), m = strlen(q + 1);
    for(int i = 0; i <= n; ++i) {
        dp[i][0] = i;
    }
    for(int i = 0; i <= m; ++i) {
        dp[0][i] = i;
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            if(s[i] == q[j]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                dp[i][j] = min(dp[i - 1][j - 1], min(dp[i][j - 1], dp[i - 1][j])) + 1;
            }
        }
    }
    return dp[n][m];
}

int main() {
    scanf("%d%d", &n, &m);
    for(int i = 0; i < n; ++i) {
        scanf("%s", s[i] + 1);
    }
    while(m--) {
        char q[N];
        int cnt;
        scanf("%s%d", q + 1, &cnt);
        int res = 0;
        for(int i = 0; i < n; ++i) {
            if(convert(s[i], q) <= cnt) {
                ++res;
            }
        }
        printf("%d\n", res);
    }
    return 0;
}
