#include<bits/stdc++.h>
using namespace std;

int main() {
    int X;
    cin >> X;
    if(X % 2 == 0) {
        for(int i = 1; i <= 11; i += 2) {
            cout << X + i << endl;
        }
    } else {
        for(int i = 0; i <= 10; i += 2) {
            cout << X + i << endl;
        }
    }
}
