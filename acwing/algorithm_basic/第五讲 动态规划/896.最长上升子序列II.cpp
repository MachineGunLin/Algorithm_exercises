#include<bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    vector<int> stk;
    stk.emplace_back(nums[0]);
    for(int i = 1; i < n; ++i) {
        if(nums[i] > stk.back()) {
            stk.emplace_back(nums[i]);
        } else {
            *lower_bound(stk.begin(), stk.end(), nums[i]) = nums[i];
        }
    }
    cout << stk.size() << endl;
    return 0;
}
