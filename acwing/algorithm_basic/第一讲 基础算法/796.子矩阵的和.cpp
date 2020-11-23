#include<bits/stdc++.h>
using namespace std;

int matrix[1005][1005], pre[1005][1005];
int n, m, q;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m >> q;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cin >> matrix[i][j];
        }
    }
    for(int i = 1; i <= n; ++i) {
        pre[i][1] = pre[i - 1][1] + matrix[i][1];
    }
    for(int i = 1; i <= m; ++i) {
        pre[1][i] = pre[1][i - 1] + matrix[1][i];
    }
    for(int i = 2; i <= n; ++i) {
        for(int j = 2; j <= m; ++j) {
            pre[i][j] = pre[i - 1][j] + pre[i][j - 1] - pre[i - 1][j - 1] + matrix[i][j];
        }
    }
    while(q--) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        cout << pre[x2][y2] - pre[x1 - 1][y2] - pre[x2][y1 - 1] + pre[x1 - 1][y1 - 1] << endl;
    }
    return 0;
}
