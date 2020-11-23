#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int nums[N], tmp[N];
int n;

void merge_sort(int nums[], int l, int r) {
    if(l >= r) {
        return ;
    }
    int mid = l + r >> 1;
    merge_sort(nums, l, mid);
    merge_sort(nums, mid + 1, r);
    int k = 0, i = l, j = mid + 1;
    while(i <= mid && j <= r) {
        if(nums[i] <= nums[j]) {
            tmp[k++] = nums[i++];
        } else {
            tmp[k++] = nums[j++];
        }
    }
    while(i <= mid) {
        tmp[k++] = nums[i++];
    }
    while(j <= r) {
        tmp[k++] = nums[j++];
    }
    for(int i = l, j = 0; i <= r; ++i, ++j) {
        nums[i] = tmp[j];
    }
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    merge_sort(nums, 0, n - 1);
    for(int i = 0; i < n; ++i) {
        cout << nums[i] << ' ';
    }
    cout << endl;
    return 0;
}
