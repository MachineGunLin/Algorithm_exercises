#include<bits/stdc++.h>
using namespace std;

void print(char str[]) {
    for(int i = 0; i < strlen(str); ++i) {
        cout << str[i];
    }
}

int main() {
    char str[101];
    fgets(str, 105, stdin);
    print(str);
}
