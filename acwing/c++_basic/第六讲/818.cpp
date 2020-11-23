#include<bits/stdc++.h>
using namespace std;

void Sort(int a[], int l, int r) {
    sort(a + l, a + r + 1);
}

int main() {
    int n, l, r, a[1001];
    cin >> n >> l >> r;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    Sort(a, l, r);
    for(int i = 0; i < n; ++i) {
        cout << a[i] << ' ';
    }
}
