#include<bits/stdc++.h>
using namespace std;

int maxN(string s) {
    for(int i = 0; i <= s.size() / 2; ++i) {
        if(s.size() % (i + 1) != 0) {
            continue;
        } else if(i + 1 < s.size() && s[i + 1] != s[0]) {
            continue;
        } else {
            string temp = s.substr(0, i + 1);
            int N = s.size() / (i + 1);
            for(int j = 0; j < N - 1; ++j) {
                temp += s.substr(0, i + 1);
            }
            if(temp == s) {
                return N;
            }
        }
    }
    return 1;
}

int main() {
    string s;
    while(cin >> s, s != ".") {
        cout << maxN(s) << endl;
    }
}
