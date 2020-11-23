#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10, M = 3e6;
int nums[N], son[M][2], idx;

void insert(int x) {
    int p = 0;
    for(int i = 30; i >= 0; --i) {
        int &s = son[p][x >> i & 1];
        if(!s) {
            s = ++idx;
        }
        p = s;
    }
}

int search(int x) {
    int p = 0, res = 0;
    for(int i = 30; i >= 0; --i) {
        int s = x >> i & 1;
        if(son[p][!s]) {
            res += 1 << i;
            p = son[p][!s];
        } else {
            p = son[p][s];
        }
    }
    return res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n, res = 0;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        insert(nums[i]);
    }
    for(int i = 0; i < n; ++i) {
        res = max(res, search(nums[i]));
    }
    cout << res << endl;
    return 0;
}
