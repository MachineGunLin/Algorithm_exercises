#include<bits/stdc++.h>
using namespace std;

using PII = pair<int, int>;

const int N = 2e5 + 10;
int h[N], e[N], ne[N], dist[N], w[N];
bool visited[N];
int idx = 0;
int n, m;

void add(int source, int dest, int weight) {
    e[idx] = dest;
    w[idx] = weight;
    ne[idx] = h[source];
    h[source] = idx++;
}

int Dijkstra() {
    dist[1] = 0;
    priority_queue<PII, vector<PII>, greater<PII>> heap;
    heap.push({0, 1});
    while(heap.size()) {
        auto t = heap.top();
        heap.pop();
        int curDist = t.first, curVer = t.second;
        if(visited[curVer] == true) {
            continue;
        }
        visited[curVer] = true;
        for(int i = h[curVer]; i != -1; i = ne[i]) {
            int j = e[i];
            if(dist[j] > curDist + w[i]) {
                dist[j] = curDist + w[i];
                heap.push({dist[j], j});
            }
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
    memset(h, -1, sizeof h);
    memset(dist, 0x3f, sizeof dist);
    cin >> n >> m;
    while(m--) {
        int source, dest, weight;
        cin >> source >> dest >> weight;
        add(source, dest, weight);
    }
    cout << Dijkstra() << endl;
    return 0;
}
