#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(20);
    for(int i = 0; i < 20; ++i) {
        cin >> nums[i];
    }
    vector<int> res(nums.rbegin(), nums.rend());
    for(int i = 0; i < 20; ++i) {
        cout << "N[" << i << "] = " << res[i] << endl;
    }
}
