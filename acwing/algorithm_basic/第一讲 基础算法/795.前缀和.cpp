#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums[N], pre[N];
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> nums[i];
    }
    pre[0] = 0;
    for(int i = 1; i <= n; ++i) {
        pre[i] = pre[i - 1] + nums[i];
    }
    while(m--) {
        int l, r;
        cin >> l >> r;
        cout << pre[r] - pre[l - 1] << endl;
    }
    return 0;
}
