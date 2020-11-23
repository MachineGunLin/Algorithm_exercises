#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s, '.');
    string res;
    int curMaxLen = 0;
    for(int i = 0, j = 0; i < s.size(); ++i) {
        while(s[j] != ' ' && j < s.size()) {
            ++j;
        }
        if(j == s.size()) {
            if(j - i > curMaxLen) {
                res = s.substr(i);
                cout << res << endl;
                return 0;
            }
        } else {
            if(j - i > curMaxLen) {
                res = s.substr(i, j - i);
                curMaxLen = j - i;
            }
            i = j;
            j = i + 1;
        }
    }
    cout << res << endl;
}
