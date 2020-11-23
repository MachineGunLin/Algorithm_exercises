#include<bits/stdc++.h>
using namespace std;

int main() {
    int N, in = 0, out = 0, x;
    cin >> N;
    while(N--) {
        cin >> x;
        if(x >= 10 && x <= 20) {
            in++;
        } else {
            out++;
        }
    }
    cout << in << " in" << endl;
    cout << out << " out" << endl;
}
