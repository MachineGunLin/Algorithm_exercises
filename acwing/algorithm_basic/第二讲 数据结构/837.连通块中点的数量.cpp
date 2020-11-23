#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int p[N], cnt[N];

int find(int x) {
    if(x != p[x]) {
        p[x] = find(p[x]);
    }
    return p[x];
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n, m;
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        p[i] = i;
        cnt[i] = 1;
    }
    string op;
    int a, b;
    while(m--) {
        cin >> op;
        if(op == "C") {
            cin >> a >> b;
            a = find(a), b = find(b);
            if(a != b) {
                p[a] = b;
                cnt[b] += cnt[a];
            }
        } else if(op == "Q1") {
            cin >> a >> b;
            if(find(a) == find(b)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        } else if(op == "Q2") {
            cin >> a;
            cout << cnt[find(a)] << endl;
        }
    }
    return 0;
}
