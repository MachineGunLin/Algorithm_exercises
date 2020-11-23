#include<bits/stdc++.h>
using namespace std;

using PII = pair<int, int>;
vector<PII> ranges;
int s, t, n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> s >> t >> n;
    for(int i = 0; i < n; ++i) {
        int l, r;
        cin >> l >> r;
        ranges.push_back({l, r});
    }
    sort(ranges.begin(), ranges.end(), [&](PII a, PII b) {
         if(a.first != b.first) {
            return a.first < b.first;
         }
         return a.second < b.second;
         });
    int cnt = 0;
    bool flag = false;
    for(int i = 0; i < n; ++i) {
        int j = i;
        int furthest = INT_MIN;
        while(j < n && ranges[j].first <= s) {
            furthest = max(furthest, ranges[j].second);
            ++j;
        }
        if(furthest < s) {
            cnt = -1;
            break;
        }
        ++cnt;
        if(furthest >= t) {
            flag = true;
            break;
        }
        s = furthest;
        i = j - 1;
    }
    if(flag == false) {
        cnt = -1;
    }
    cout << cnt << endl;
    return 0;
}
