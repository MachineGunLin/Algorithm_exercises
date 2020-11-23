#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin, s, '\n');
    for(int i = 0; i < s.size(); ++i) {
        if('a' <= s[i] && s[i] <= 'z') {
            if(s[i] == 'z') {
                s[i] = 'a';
            } else {
                s[i] = s[i] + 1;
            }
        } else if('A' <= s[i] && s[i] <= 'Z') {
            if(s[i] == 'Z') {
                s[i] = 'A';
            } else {
                s[i] = s[i] + 1;
            }
        }
    }
    cout << s << endl;
}
