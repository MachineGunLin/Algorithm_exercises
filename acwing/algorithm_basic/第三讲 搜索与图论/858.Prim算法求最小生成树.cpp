#include<bits/stdc++.h>
using namespace std;

int n, m;
const int N = 510;
const int INF = 0x3f3f3f3f;
int g[N][N];
int dist[N];
bool visited[N];
int res = 0;

int prim() {
    memset(dist, 0x3f, sizeof dist);

    for(int i = 0; i < n; ++i) {
        int t = -1;
        for(int j = 1; j <= n; ++j) {
            if(!visited[j] &&(t == -1 || dist[t] > dist[j])) {
                t = j;
            }
        }
        if(i && dist[t] == INF) {
            return  INF;
        }
        if(i) {
            res += dist[t];
        }
        visited[t] = true;
        for(int j = 1; j <= n; ++j) {
            dist[j] = min(dist[j], g[t][j]);
        }
    }
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(g, 0x3f, sizeof g);
    cin >> n >> m;
    while(m--) {
        int a, b, c;
        cin >> a >> b >> c;
        g[a][b] = g[b][a] = min(g[a][b], c);
    }
    if(prim() == INF) {
        cout << "impossible" << endl;
    } else {
        cout << prim() << endl;
    }
}
