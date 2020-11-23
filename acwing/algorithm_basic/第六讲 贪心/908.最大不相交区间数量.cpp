#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

struct Range {
    int left;
    int right;
}ranges[N];

int n;

bool cmp(Range a, Range b) {
    if(a.right != b.right) {
        return a.right < b.right;
    }
    return a.left < b.left;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        ranges[i] = {l, r};
    }
    sort(ranges, ranges + n, cmp);
    int cnt = 1;
    int last = ranges[0].right;
    for(int i = 1; i < n; ++i) {
        if(ranges[i].left <= last) {
            continue;
        } else {
            ++cnt;
            last = ranges[i].right;
        }
    }
    cout << cnt << endl;
    return 0;
}
