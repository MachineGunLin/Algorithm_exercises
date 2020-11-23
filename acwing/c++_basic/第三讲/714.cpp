#include<bits/stdc++.h>
using namespace std;

int main() {
    int X, Y, res = 0;
    cin >> X >> Y;
    if(X < Y) {
        swap(X, Y);
    }
    for(int i = Y + 1; i < X; ++i) {
        if(i % 2 != 0) {
            res += i;
        }
    }
    cout << res << endl;
}
