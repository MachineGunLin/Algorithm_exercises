#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string s;
        cin >> s;
        char c = s[0];
        int cnt = 1;
        for(int i = 0, j = 0; i < s.size() && j < s.size(); ++i) {
            while(s[i] == s[j]) {
                ++j;
            }
            if(j == s.size()) {
                if(s.size() - i > cnt) {
                    c = s[i];
                    cnt = s.size() - i;
                }
                break;
            } else {
                if(j - i > cnt) {
                    c = s[i];
                    cnt = j - i;
                    i = j - 1;
                }
            }

        }
        cout << c << " " << cnt << endl;
    }
}
