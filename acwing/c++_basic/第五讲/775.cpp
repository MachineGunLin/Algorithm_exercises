#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, res;
    vector<string> words;
    getline(cin, s, '\n');
    for(int i = 0, j = 0; i < s.size(); ++i) {
        while(s[j] != ' ' && j < s.size()) {
            ++j;
        }
        if(j == s.size()) {
            words.push_back(s.substr(i));
            break;
        }
        words.push_back(s.substr(i, j - i));
        i = j;
        j = i + 1;
    }
    for(int i = words.size() - 1; i >= 0; --i) {
        if(i != 0) {
            res += words[i] + ' ';
        } else {
            res += words[i];
        }
    }
    cout << res << endl;
}
