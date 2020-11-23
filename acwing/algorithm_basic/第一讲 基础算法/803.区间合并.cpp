#include<bits/stdc++.h>
using namespace std;

using PII = pair<int, int>;
vector<PII> ranges;
int n;

void merge(vector<PII> &ranges) {
    sort(ranges.begin(), ranges.end());
    vector<PII> res;
    int start = INT_MIN, end = INT_MIN;
    for(auto &range : ranges) {
        if(range.first > end) {
            if(start != INT_MIN) {
                res.push_back({start, end});
            }
            start = range.first, end = range.second;
        } else {
            end = max(end, range.second);
        }
    }
    if(start != INT_MIN) {
        res.push_back({start, end});
    }
    ranges = res;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    while(n--) {
        int l, r;
        cin >> l >> r;
        ranges.push_back({l, r});
    }
    merge(ranges);
    cout << ranges.size() << endl;
    return 0;
}
