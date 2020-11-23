#include<bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    double k, matchNum = 0;
    cin >> k >> a >> b;
    double size = a.size();
    for(int i = 0; i < size; ++i) {
        if(a[i] == b[i]) {
            ++matchNum;
        }
    }
    matchNum /= size;
    if(matchNum >= k) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}
