#include<bits/stdc++.h>
using namespace std;

const int N = 510;
const int M = 1e5 + 10;
int n1, n2, m;
int h[N], e[M], ne[M], idx;
int match[N];
bool visited[N];

void add(int a, int b) {
    e[idx] = b;
    ne[idx] = h[a];
    h[a] = idx++;
}

bool find(int x) {
    for(int i = h[x]; i != -1; i = ne[i]) {
        int j = e[i];
        if(!visited[j]) {
            visited[j] = true;
            if(match[j] == 0 || find(match[j])) {
                match[j] = x;
                return true;
            }
        }
    }
    return false;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(h, -1, sizeof h);
    cin >> n1 >> n2 >> m;
    while(m--) {
        int a, b;
        cin >> a >> b;
        add(a, b);
    }
    int res = 0;
    for(int i = 1; i <= n1; ++i) {
        memset(visited, false, sizeof visited);
        if(find(i)) {
            ++res;
        }
    }
    cout << res << endl;
    return 0;
}
