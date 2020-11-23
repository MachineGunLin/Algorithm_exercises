#include<bits/stdc++.h>
using namespace std;

using PII = pair<int, int>;
vector<PII> cities;
vector<int> dp;
int n;

int main() {
    cin.tie(nullptr);
    cout.tie(nullptr);
    ios::sync_with_stdio(false);
    cities.resize(5010);
    dp.resize(5010);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> cities[i].first >> cities[i].second;
        dp[i] = 1;
    }
    sort(cities.begin(), cities.begin() + n, [&](const PII &a, const PII &b) {
        if(a.first != b.first) {
            return a.first < b.first;
         }
         return a.second < b.second;
        });
    for(int i = 0; i < n; ++i) {
        for(int j = 0; j < i; ++j) {
            if(cities[i].second > cities[j].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    cout << *max_element(dp.begin(), dp.begin() + n) << endl;
    return 0;
}
