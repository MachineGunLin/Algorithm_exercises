#include<bits/stdc++.h>
using namespace std;

void reverse(int a[], int Size) {
    for(int i = 0; i < Size / 2; ++i) {
        swap(a[i], a[Size - i - 1]);
    }
}

int main() {
    int a[1001], sizeA, Size;
    cin >> sizeA >> Size;
    for(int i = 0; i < sizeA; ++i) {
        cin >> a[i];
    }
    reverse(a, Size);
    for(int i = 0; i < sizeA; ++i) {
        cout << a[i] << ' ';
    }
}
