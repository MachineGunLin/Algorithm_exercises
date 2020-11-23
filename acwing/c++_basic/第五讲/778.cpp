#include<bits/stdc++.h>
using namespace std;

int maxDist(string s, string s1, string s2) {
    int s1Right, s2Left;
    for(int i = 0; i < s.size() - s1.size(); ++i) {
        if(s[i] != s1[0]) {
            continue;
        } else {
            int k;
            for(k = 0; k < s1.size(); ++k) {
                if(s1[k] != s[i + k]) {
                    break;
                }
            }
            if(k == s1.size()) {
                s1Right = i + k;
                break;
            } else {
                continue;
            }
        }
    }
    for(int i = s.size() - s2.size(); i >= 0; --i) {
        if(s[i] != s2[0]) {
            continue;
        } else {
            int k;
            for(k = 0; k < s2.size(); ++k) {
                if(s2[k] != s[i + k]) {
                    break;
                }
            }
            if(k == s2.size()) {
                s2Left = i;
                break;
            } else {
                continue;
            }
        }
    }
    if(s1Right >= s2Left) {
        return -1;
    } else {
        return s2Left - s1Right;
    }
}

int main() {
    string input, s, s1, s2;
    cin >> input;
    int commaNum = 1;
    for(int i = 0, j = 0; i < input.size(); ++i) {
        while(input[j] != ',' && j < input.size()) {
            ++j;
        }
        if(input[j] == ',') {
            if(commaNum == 1) {
                s = input.substr(0, j);
                ++commaNum;
                i = j;
                j = i + 1;
            } else if(commaNum == 2) {
                s1 = input.substr(i, j - i);
                i = j + 1;
                s2 = input.substr(i);
                break;
            }
        }
    }
    cout << maxDist(s, s1, s2) << endl;
    //cout << s << " " << s1 << " " << s2 << endl;
}
