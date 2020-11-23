#include<bits/stdc++.h>
using namespace std;

string longestCommonPrefix(string s1, string s2) {
    int size = min(s1.size(), s2.size());
    string res;
    for(int i = 0; i < size; ++i) {
        if(s1[i] == s2[i]) {
            res += s1[i];
        } else {
            break;
        }
    }
    return res;
}

int main() {
    int N;
    while(cin >> N, N) {
        vector<string> s(N);
        for(int i = 0; i < s.size(); ++i) {
            cin >> s[i];
            reverse(s[i].begin(), s[i].end());
        }
        string res = s[0];
        for(int i = 1; i < s.size(); ++i) {
            res = longestCommonPrefix(res, s[i]);
        }
        cout << string(res.rbegin(), res.rend()) << endl;
    }
}
