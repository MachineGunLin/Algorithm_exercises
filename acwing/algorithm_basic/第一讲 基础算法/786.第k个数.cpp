#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums[N];
int n, k;

void quick_sort(int nums[], int l, int r) {
    if(l >= r) {
        return ;
    }
    int x = nums[(l + r) / 2], i = l - 1, j = r + 1;
    while(i < j) {
        do ++i; while(nums[i] < x);
        do --j; while(nums[j] > x);
        if(i < j) {
            swap(nums[i], nums[j]);
        }
    }
    quick_sort(nums, l, j);
    quick_sort(nums, j + 1, r);
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    quick_sort(nums, 0, n - 1);
    cout << nums[k - 1] << endl;
    return 0;
}
