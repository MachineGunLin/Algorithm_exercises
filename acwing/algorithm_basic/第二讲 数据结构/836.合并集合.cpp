#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int p[N];

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
    }
    while(m--) {
        string op;
        int a, b;
        cin >> op >> a >> b;
        if(op == "M") {
            p[find(a)] = find(b);
        } else if(op == "Q") {
            if(find(a) == find(b)) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}
