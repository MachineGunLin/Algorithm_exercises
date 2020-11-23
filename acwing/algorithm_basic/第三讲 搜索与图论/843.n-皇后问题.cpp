#include<bits/stdc++.h>
using namespace std;

const int N = 10;
char g[N][N];
bool cols[N], dg[N * 2], udg[N * 2];
int n;

void dfs(int u) {
    if(u == n) {
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < n; ++j) {
                cout << g[i][j];
            }
            cout << endl;
        }
        cout << endl;
        return ;
    }
    for(int i = 0; i < n; ++i) {
        if(cols[i] == false && dg[u + i] == false && udg[n - u + i] == false) {
            g[u][i] = 'Q';
            cols[i] = dg[u + i] = udg[n - u + i] = true;
            dfs(u + 1);
            cols[i] = dg[u + i] = udg[n - u + i] = false;
            g[u][i] = '.';
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < n; ++j) {
            g[i][j] = '.';
        }
    }
    dfs(0);
    return 0;
}
