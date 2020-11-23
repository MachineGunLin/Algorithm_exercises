#include<bits/stdc++.h>
using namespace std;

bool isSub(string s1, string s2) {
    for(int i = 0; i < s1.size(); ++i) {
        if(s1[i] != s2[0]) {
            continue;
        } else {
            string temp = s1.substr(i) + s1.substr(0, i);
            if(temp.substr(0, s2.size()) == s2) {
                return true;
            } else {
                continue;
            }
        }
    }
    return false;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    if(s1.size() >= s2.size()) {
        if(isSub(s1, s2)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    } else {
        if(isSub(s2, s1)) {
            cout << "true" << endl;
        } else {
            cout << "false" << endl;
        }
    }
}
