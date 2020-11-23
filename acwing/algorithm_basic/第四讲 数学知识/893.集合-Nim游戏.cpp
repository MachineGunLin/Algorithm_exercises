#include<bits/stdc++.h>
using namespace std;

const int N = 110, M = 10010;
int s[N], f[M];
int n, m;

int sg(int x) {
    if(f[x] != -1) {
        return f[x];
    }
    unordered_set<int> S;
    for(int i = 0; i < m; ++i) {
        int diff = s[i];
        if(diff <= x) {
            S.insert(sg(x - diff));
        }
    }
    for(int i = 0; ; ++i) {
        if(S.count(i) == 0) {
            return f[x] = i;
        }
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    memset(f, -1, sizeof f);
    cin >> m;
    for(int i = 0; i < m; ++i) {
        cin >> s[i];
    }
    int res = 0;
    cin >> n;
    while(n--) {
        int x;
        cin >> x;
        res ^= sg(x);
    }
    if(res != 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
