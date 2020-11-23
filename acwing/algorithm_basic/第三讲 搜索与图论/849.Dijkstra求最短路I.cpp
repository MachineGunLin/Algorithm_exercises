#include<bits/stdc++.h>
using namespace std;

const int N = 510;

int g[N][N];
int dist[N];
bool visited[N];
int n, m;

int Dijkstra() {
    dist[1] = 0;
    for(int i = 0; i < n; ++i) {
        int t = -1;
        for(int j = 1; j <= n; ++j) {
            if(visited[j] == false && (t == -1 || dist[j] < dist[t])) {
                t = j;
            }
        }
        visited[t] = true;
        for(int j = 1; j <= n; ++j) {
            dist[j] = min(dist[j], dist[t] + g[t][j]);
        }
    }
    if(dist[n] == 0x3f3f3f3f) {
        return -1;
    }
    return dist[n];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(g, 0x3f, sizeof g);
    memset(dist, 0x3f, sizeof dist);
    cin >> n >> m;
    while(m--) {
        int source, dest, weight;
        cin >> source >> dest >> weight;
        g[source][dest] = min(g[source][dest], weight);
    }
    cout << Dijkstra() << endl;
    return 0;
}
