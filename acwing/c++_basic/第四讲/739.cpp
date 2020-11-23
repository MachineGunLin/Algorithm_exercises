#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<double> nums(100);
    for(int i = 0; i < nums.size(); ++i) {
        cin >> nums[i];
        if(nums[i] <= 10) {
            printf("A[%d] = %.1lf\n", i, nums[i]);
        }
    }
}
