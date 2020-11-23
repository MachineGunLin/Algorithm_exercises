#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while(T--) {
        string str1, str2;
        cin >> str1 >> str2;
        if(str1 == str2) {
            cout << "Tie" << endl;
        } else if(str1 == "Hunter") {
            if(str2 == "Bear") {
                cout << "Player2" << endl;
            } else {
                cout << "Player1" << endl;
            }
        } else if(str1 == "Bear") {
            if(str2 == "Hunter") {
                cout << "Player1" << endl;
            } else {
                cout << "Player2" << endl;
            }
        } else if(str1 == "Gun") {
            if(str2 == "Hunter") {
                cout << "Player2" << endl;
            } else {
                cout << "Player1" << endl;
            }
        }
    }
}
