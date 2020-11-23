#include<bits/stdc++.h>
using namespace std;

const int N = 110;
int f[N];

int sg(int x) {
    if(f[x] != -1) {
        return f[x];
    }
    unordered_set<int> S;
    for(int i = 0; i < x; ++i) {
        for(int j = 0; j <= i; ++j) {
            S.insert(sg(i) ^ sg(j));
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
    int n;
    cin >> n;
    int res = 0;
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
