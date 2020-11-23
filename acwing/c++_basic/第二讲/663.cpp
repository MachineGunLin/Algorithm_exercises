#include<bits/stdc++.h>
using namespace std;

int main() {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    int b[3];
    for(int i = 0; i < 3; ++i) {
        b[i] = a[i];
    }
    sort(a, a + 3);
    for(int i = 0; i < 3; ++i) {
        cout << a[i] << endl;
    }
    cout << endl;
    for(int i = 0; i < 3; ++i) {
        cout << b[i] << endl;
    }
}
