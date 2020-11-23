#include<bits/stdc++.h>
using namespace std;

const int N = 5e4 + 10;
int p[N], d[N];

int find(int x) {
    if(x != p[x]) {
        int t = find(p[x]);
        d[x] += d[p[x]];
        p[x] = t;
    }
    return p[x];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        p[i] = i;
    }
    int res = 0;
    while(m--) {
        int t, x, y;
        cin >> t >> x >> y;
        if(x > n || y > n) {
            ++res;
        } else {
            int px = find(x), py = find(y);
            if(t == 1) {
                if(px == py && (d[x] - d[y]) % 3 != 0) {
                    ++res;
                } else if(px != py) {
                    p[px] = py;
                    d[px] = d[y] - d[x];
                }
            } else if(t == 2) {
                if(px == py && (d[x] - d[y] - 1) % 3 != 0) {
                    ++res;
                } else if(px != py) {
                    p[px] = py;
                    d[px] = d[y] - d[x] + 1;
                }
            }
        }
    }
    cout << res << endl;
    return 0;
}
