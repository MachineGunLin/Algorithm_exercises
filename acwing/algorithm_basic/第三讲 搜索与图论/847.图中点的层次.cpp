#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N], e[N], ne[N], d[N];
int idx, n, m;

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

int bfs() {
    queue<int> q;
    q.push(1);
    d[1] = 0;
    while(!q.empty()) {
        int t = q.front();
        q.pop();
        for(int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if(d[j] == -1) {
                d[j] = d[t] + 1;
                q.push(j);
            }
        }
    }
    return d[n];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(h, -1, sizeof h);
    memset(d, -1, sizeof d);
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    cout << bfs() << endl;
    return 0;
}
