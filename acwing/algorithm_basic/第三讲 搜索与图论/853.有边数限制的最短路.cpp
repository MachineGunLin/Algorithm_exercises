#include<bits/stdc++.h>
using namespace std;

const int N = 510, M = 10010;
int dist[N];
int backup[N];
int n, m, k;

struct Edge {
    int source;
    int dest;
    int cost;
}edges[M];

int bellman_ford() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    for(int i = 0; i < k; ++i) {
        memcpy(backup, dist, sizeof dist);
        for(int j = 0; j < m; ++j) {
            int source = edges[j].source, dest = edges[j].dest, cost = edges[j].cost;
            dist[dest] = min(dist[dest], backup[source] + cost);
        }
    }
    if(dist[n] > 0x3f3f3f3f / 2) {
        return -1;
    }
    return dist[n];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m >> k;
    for(int i = 0; i < m; ++i) {
        int source, dest, cost;
        cin >> source >> dest >> cost;
        edges[i] = {source, dest, cost};
    }
    if(bellman_ford() == -1) {
        cout << "impossible" << endl;
    } else {
        cout << bellman_ford() << endl;
    }
    return 0;
}
