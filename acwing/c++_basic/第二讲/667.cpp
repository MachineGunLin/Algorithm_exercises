#include<bits/stdc++.h>
using namespace std;

int main() {
    int begin, end;
    cin >> begin >> end;
    int diff = end - begin > 0 ? end - begin : (end - begin == 0 ? 24 : (end - begin + 24));
    cout << "O JOGO DUROU" << " " << diff << " " << "HORA(S)" << endl;
}
