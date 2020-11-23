#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

struct Range {
    int left;
    int right;
    bool operator < (const Range & W) const {
        return left < W.left;
    }
}ranges[N];

int n;

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
    sort(ranges, ranges + n);
    priority_queue<int, vector<int>, greater<int>> heap;
    for(int i = 0; i < n; ++i) {
        auto curRange = ranges[i];
        if(heap.empty() || curRange.left <= heap.top()) {
            heap.push(curRange.right);
        } else {
            heap.pop();
            heap.push(curRange.right);
        }
    }
    cout << heap.size() << endl;
    return 0;
}
