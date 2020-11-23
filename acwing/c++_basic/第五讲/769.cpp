#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    char c;
    cin >> s >> c;
    for(int i = 0; i < s.size(); ++i) {
        if(s[i] == c) {
            s[i] = '#';
        }
    }
    cout << s << endl;
}
