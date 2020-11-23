#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 10;
int nums[N], q[N];
int hh, tt;
int n, k;

void init() {
    hh = 0;
    tt = -1;
}

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        cin >> nums[i];
        if(i - k + 1 > q[hh]) {
            ++hh;
        }
        while(hh <= tt && nums[q[tt]] >= nums[i]) {
            --tt;
        }
        q[++tt] = i;
        if(i - k + 1 >= 0) {
            cout << nums[q[hh]] << ' ';
        }
    }
    cout << endl;
    init();
    for(int i = 0; i < n; ++i) {
        if(i - k + 1 > q[hh]) {
            ++hh;
        }
        while(hh <= tt && nums[q[tt]] <= nums[i]) {
            --tt;
        }
        q[++tt] = i;
        if(i - k + 1 >= 0) {
            cout << nums[q[hh]] << ' ';
        }
    }
    cout << endl;
    return 0;
}
