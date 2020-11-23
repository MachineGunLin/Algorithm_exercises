#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int h[N], e[N], ne[N], d[N];
int idx, n, m;
vector<int> topoSequence;

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
    ++d[b];
}

bool topoSort() {
    queue<int> q;
    for(int i = 1; i <= n; ++i) {
        if(d[i] == 0) {
            q.push(i);
            topoSequence.push_back(i);
        }
    }
    while(!q.empty()) {
        auto t = q.front();
        q.pop();
        for(int i = h[t]; i != -1; i = ne[i]) {
            int j = e[i];
            --d[j];
            if(d[j] == 0) {
                q.push(j);
                topoSequence.push_back(j);
            }
        }
    }
    if(topoSequence.size() == n) {
        return true;
    }
    return false;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(h, -1, sizeof h);
    memset(d, 0, sizeof d);
    cin >> n >> m;
    for(int i = 0; i < m; ++i) {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    if(topoSort()) {
        for(int i = 0; i < topoSequence.size(); ++i) {
            cout << topoSequence[i] << ' ';
        }
        cout << endl;
    } else {
        cout << "-1" << endl;
    }
    return 0;
}
