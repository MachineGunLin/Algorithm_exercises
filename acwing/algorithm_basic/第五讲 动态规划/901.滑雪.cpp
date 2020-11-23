#include<bits/stdc++.h>
using namespace std;

const int N = 310;
int area[N][N];
int dp[N][N];
int dx[4] = {1, 0, 0, -1};
int dy[4] = {0, 1, -1, 0};
int n, m;

int dfs(int x, int y) {
    if(dp[x][y] != 0) {
        return dp[x][y];
    }
    dp[x][y] = 1;
    for(int i = 0; i < 4; ++i) {
        int newX = x + dx[i], newY = y + dy[i];
        if(newX >= 0 && newX < n && newY >= 0 && newY < m && area[x][y] > area[newX][newY]) {
            dp[x][y] = max(dp[x][y], dfs(newX, newY) + 1);
        }
    }
    return dp[x][y];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            cin >> area[i][j];
        }
    }
    int res = 0;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < m; ++j) {
            res = max(res, dfs(i, j));
        }
    }
    cout << res << endl;
}
