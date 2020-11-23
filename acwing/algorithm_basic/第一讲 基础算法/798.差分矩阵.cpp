#include<bits/stdc++.h>
using namespace std;

const int N = 1010;
int matrix[N][N], diff[N][N];
int n, m, q;

void Insert(int x1, int y1, int x2, int y2, int c) {
    diff[x1][y1] += c;
    diff[x2 + 1][y1] -= c;
    diff[x1][y2 + 1] -= c;
    diff[x2 + 1][y2 + 1] += c;
}

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
        for(int j = 1; j <= m; ++j) {
            Insert(i, j, i, j, matrix[i][j]);
        }
    }
    while(q--) {
        int x1, y1, x2, y2, c;
        cin >> x1 >> y1 >> x2 >> y2 >> c;
        Insert(x1, y1, x2, y2, c);
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            diff[i][j] += diff[i - 1][j] + diff[i][j - 1] - diff[i - 1][j - 1];
        }
    }
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= m; ++j) {
            cout << diff[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
