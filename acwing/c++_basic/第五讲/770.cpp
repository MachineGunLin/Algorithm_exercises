#include<bits/stdc++.h>
using namespace std;

int main() {
    string s, a, b, res;
    getline(cin, s, '\n');
    cin >> a >> b;
    vector<string> vec;
    for(int i = 0, j = 0; i < s.size() && j < s.size(); ++i) {
        while(j < s.size() && s[j] != ' ') {
            ++j;
        }
        if(j == s.size()) {
            string temp = s.substr(i, j - i);
            vec.push_back(temp);
            break;
        } else {
            string temp = s.substr(i, j - i);
            vec.push_back(temp);
            i = j;
            j = i + 1;
        }
    }
    for(int i = 0; i < vec.size(); ++i) {
        if(vec[i] == a) {
            vec[i] = b;
        }
    }
    for(int i = 0; i < vec.size(); ++i) {
        if(i < vec.size() - 1) {
            res += vec[i] + ' ';
        } else {
            res += vec[i];
        }
    }
    cout << res << endl;
}
