#include<bits/stdc++.h>
using namespace std;

const int N = 2010, M = 10010;

int n, m;
int h[N], w[M], e[M], ne[M], idx;
int dist[N], cnt[N];
bool visited[N];

void add(int a, int b, int c) {
    e[idx] = b;
    w[idx] = c;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool spfa() {
    queue<int> q;
    for(int i = 1; i <= n; ++i) {
        visited[i] = true;
        q.push(i);
    }
    while(q.size()) {
        int t = q.front();
        q.pop();
        visited[t] = false;
        for(int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            if(dist[j] > dist[t] + w[i]) {
                dist[j] = dist[t] + w[i];
                cnt[j] = cnt[t] + 1;
                if(cnt[j] >= n) {
                    return true;
                }
                if(!visited[j]) {
                    q.push(j);
                    visited[j] = true;
                }
            }
        }
    }
    return false;
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
    if(spfa() == true) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
