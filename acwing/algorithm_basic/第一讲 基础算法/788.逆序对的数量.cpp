#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int nums[N], tmp[N];
int n;
double res = 0;

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
            res += mid - i + 1;
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
    scanf("%d", &n);
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
    }
    merge_sort(nums, 0, n - 1);
    printf("%.0lf\n", res);
    return 0;
}
