#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, res;
    getline(cin, s, '\n');
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] != ' ' || s[i - 1] != ' ') {
            res += s[i];
        }
    }
    cout << res << endl;
}
