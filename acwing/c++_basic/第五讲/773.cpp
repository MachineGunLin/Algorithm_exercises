#include<bits/stdc++.h>
using namespace std;

int main() {
    string str, sub;
    while(cin >> str >> sub) {
        string res;
        int max = 0;
        for(int i = 1; i < str.size(); ++i) {
            if(str[i] > str[max]) {
                max = i;
            }
        }
        res += str.substr(0, max + 1);
        res += sub;
        res += str.substr(max + 1);
        cout << res << endl;
    }
}
