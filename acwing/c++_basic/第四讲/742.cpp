#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> nums(N);
    int minVal = INT_MAX;
    int minIndex = -1;
    for(int i = 0; i < N; ++i) {
        cin >> nums[i];
        if(nums[i] < minVal) {
            minVal = nums[i];
            minIndex = i;
        }
    }
    cout << "Minimum value: " << minVal << endl;
    cout << "Position: " << minIndex << endl;
}
