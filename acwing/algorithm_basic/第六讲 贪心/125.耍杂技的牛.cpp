#include<bits/stdc++.h>
using namespace std;

using PII = pair<int, int>;
vector<PII> cows;
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int w, s;
        cin >> w >> s;
        cows.push_back({w, s});
    }
    sort(cows.begin(), cows.end(), [&](PII a, PII b) {
            return a.first + a.second < b.first + b.second;
        });
    int res = INT_MIN;
    int weightAbove = 0;
    for(int i = 0; i < cows.size(); ++i) {
        int maxRisk = weightAbove - cows[i].second;
        res = max(res, maxRisk);
        weightAbove += cows[i].first;
    }
    cout << res << endl;
    return 0;
}
