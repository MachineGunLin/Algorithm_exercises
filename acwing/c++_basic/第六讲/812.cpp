#include<bits/stdc++.h>
using namespace std;

int a[1005];

void print(int a[], int Size) {
    for(int i = 0; i < Size; ++i) {
        cout << a[i] << ' ';
    }
    cout << endl;
}

int main() {
    int n, Size;
    cin >> n >> Size;
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    print(a, Size);
}
