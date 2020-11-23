#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums(10);
    int V;
    cin >> V;
    nums[0] = V;
    for(int i = 1; i < 10; ++i) {
        nums[i] = 2 * nums[i - 1];
    }
    for(int i = 0; i < nums.size(); ++i) {
        cout << "N[" << i << "] = " << nums[i] << endl;
    }
}
