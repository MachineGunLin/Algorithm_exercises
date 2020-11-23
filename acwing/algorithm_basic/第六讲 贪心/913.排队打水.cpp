#include<bits/stdc++.h>
using namespace std;

using LL = long long;
vector<int> times;
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        times.push_back(x);
    }
    sort(times.begin(), times.end());
    LL sum = 0, curTime = 0;
    for(int i = 0; i < times.size(); ++i) {
        sum += curTime;
        curTime += times[i];
    }
    cout << sum << endl;
    return 0;
}
