#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
const int M = 2e5 + 10;
const int INF = 0x3f3f3f3f;
int p[N];
int n, m;

struct Edge {
    int a;
    int b;
    int w;
    bool operator < (const Edge &W) const {
        return w < W.w;
    }
}edges[M];

int find(int x) {
    if(p[x] != x) {
        p[x] = find(p[x]);
    }
    return p[x];
}

int Kruskal() {
    int res = 0;
    int cnt = 0;
    for(int i = 1; i <= n; ++i) {
        p[i] = i;
    }
    sort(edges, edges + m);
    for(int i = 0; i < m; ++i) {
        int a = edges[i].a, b = edges[i].b, w = edges[i].w;
        a = find(a), b = find(b);
        if(a != b) {
            p[a] = b;
            res += w;
            ++cnt;
        }
    }
    if(cnt < n - 1) {
        return INF;
    }
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int a, b, w;
        cin >> a >> b >> w;
        edges[i].a = a, edges[i].b = b, edges[i].w = w;
    }
    if(Kruskal() == INF) {
        cout << "impossible" << endl;
    } else {
        cout << Kruskal() << endl;
    }
    return 0;
}
