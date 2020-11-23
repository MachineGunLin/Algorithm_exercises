#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int h[N], e[N * 2], ne[N * 2];
int idx, n, ans = N;
bool visited[N];

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int dfs(int u) {
    int res = 0;
    int sum = 1;
    visited[u] = true;
    for(int i = h[u]; i != -1; i = ne[i]) {
        int j = e[i];
        if(!visited[j]) {
            int s = dfs(j);
            sum += s;
            res = max(res, s);
        }
    }
    res = max(res, n - sum);
    ans = min(ans, res);
    return sum;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(h, -1, sizeof h);
    cin >> n;
    for(int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        add(a, b);
        add(b, a);
    }
    dfs(1);
    cout << ans << endl;
    return 0;
}
