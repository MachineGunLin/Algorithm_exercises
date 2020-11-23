#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10, M = 1e6 + 10;
int n, m;
int ne[N];
char s[M], p[N];

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> p + 1 >> m >> s + 1;
    for (int i = 2, j = 0; i <= n; ++i) {
        while (j != 0 && p[i] != p[j + 1]) {
            j = ne[j];
        }
        if (p[i] == p[j + 1]) {
            ++j;
        }
        ne[i] = j;
    }
    for (int i = 1, j = 0; i <= m; ++i) {
        while (j != 0 && s[i] != p[j + 1]) {
            j = ne[j];
        }
        if (s[i] == p[j + 1]) {
            ++j;
        }
        if (j == n) {
            cout << i - n << ' ';
            j = ne[j];
        }
    }
    return 0;
}
