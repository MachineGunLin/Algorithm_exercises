#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(10);
    for(int i = 0; i < 10; ++i) {
        cin >> nums[i];
        if(nums[i] <= 0) {
            nums[i] = 1;
        }
    }
    for(int i = 0; i < 10; ++i) {
        cout << "X[" << i << "] = " << nums[i] << endl;
    }
}
