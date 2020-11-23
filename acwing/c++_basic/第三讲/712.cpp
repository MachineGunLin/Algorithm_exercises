#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<double> nums(6);
    int res = 0;
    for(int i = 0; i < nums.size(); ++i) {
        cin >> nums[i];
        if(nums[i] > 0) {
            res++;
        }
    }
    cout << res << " positive numbers" << endl;
}
