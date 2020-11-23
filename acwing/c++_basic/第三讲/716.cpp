#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(101);
    int maxNum = 0;
    int maxIndex = 0;
    for(int i = 1; i <= 100; ++i) {
        cin >> nums[i];
        if(nums[i] > maxNum) {
            maxNum = nums[i];
            maxIndex = i;
        }
    }
    cout << maxNum << endl << maxIndex << endl;
}
