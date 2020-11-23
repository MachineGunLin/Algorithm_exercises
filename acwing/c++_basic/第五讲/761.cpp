#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int res = 0;
    for(int i = 0; i < s.size(); ++i) {
        if('0' <= s[i] && s[i] <= '9') {
            ++res;
        }
    }
    cout << res << endl;
}
