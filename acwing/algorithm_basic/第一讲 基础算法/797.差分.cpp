#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums[N], diff[N];
int n, m;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for(int i = 1; i <= n; ++i) {
        cin >> nums[i];
    }
    for(int i = 1; i <= n; ++i) {
        diff[i] = nums[i] - nums[i - 1];
    }
    while(m--) {
        int l, r, c;
        cin >> l >> r >> c;
        diff[l] += c;
        diff[r + 1] -= c;
    }
    for(int i = 1; i <= n; ++i) {
        diff[i] += diff[i - 1];
    }
    for(int i = 1; i <= n; ++i) {
        cout << diff[i] << ' ';
    }
    cout << endl;
    return 0;
}
