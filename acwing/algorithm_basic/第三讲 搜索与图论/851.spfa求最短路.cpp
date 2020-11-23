#include<bits/stdc++.h>
using namespace std;

const int N = 100010;

int n, m;
int h[N], w[N], e[N], ne[N], idx;
int dist[N];
bool visited[N];

void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

int spfa() {
    memset(dist, 0x3f, sizeof dist);
    dist[1] = 0;
    queue<int> q;
    q.push(1);
    visited[1] = true;
    while(q.size()) {
        int t = q.front();
        q.pop();
        visited[t] = false;
        for(int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if(dist[j] > dist[t] + w[i]) {
                dist[j] = dist[t] + w[i];
                if(!visited[j]) {
                    q.push(j);
                    visited[j] = true;
                }
            }
        }
    }
    return dist[n];
}


int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    memset(h, -1, sizeof h);
    while(m--) {
        int a, b, c;
        cin >> a >> b >> c;
        add(a, b, c);
    }
    if(spfa() == 0x3f3f3f3f) {
        cout << "impossible" << endl;
    } else {
        cout << spfa() << endl;
    }
    return 0;
}
