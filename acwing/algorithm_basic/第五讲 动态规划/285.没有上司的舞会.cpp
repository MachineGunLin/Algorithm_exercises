#include<bits/stdc++.h>
using namespace std;

const int N = 6010;
int dp[N][2];
int h[N];
bool hasFather[N];
vector<int> son[N];
int n;

void dfs(int x) {
    dp[x][0] = 0;
    dp[x][1] = h[x];
    for(int i = 0; i < son[x].size(); ++i) {
        int y = son[x][i];
        dfs(y);
        dp[x][0] += max(dp[y][0], dp[y][1]);
        dp[x][1] += dp[y][0];
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 1; i <= n; ++i) {
        cin >> h[i];
    }
    for(int i = 0; i < n - 1; ++i) {
        int x, y;
        cin >> x >> y;
        hasFather[x] = true;
        son[y].push_back(x);
    }
    int root = 0;
    for(int i = 1; i <= n; ++i) {
        if(hasFather[i] == false) {
            root = i;
            break;
        }
    }
    dfs(root);
    cout << max(dp[root][0], dp[root][1]) << endl;
    return 0;
}
