#include<bits/stdc++.h>
using namespace std;

void copy(int a[], int b[], int Size) {
    for(int i = 0; i < Size; ++i) {
        b[i] = a[i];
    }
}

int main() {
    int a[101], b[101], sizeA, sizeB, Size;
    cin >> sizeA >> sizeB >> Size;
    for(int i = 0; i < sizeA; ++i) {
        cin >> a[i];
    }
    for(int i = 0; i < sizeB; ++i) {
        cin >> b[i];
    }
    copy(a, b, Size);
    for(int i = 0; i < sizeB; ++i) {
        cout << b[i] << ' ';
    }
}
