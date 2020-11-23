#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int minutes = d >= b ? d - b : (d - b + 60) % 60, hours = d >= b ? c - a : c - a - 1;
    hours = hours > 0 ? hours : (hours == 0 && minutes == 0 ? 24 : (hours + 24) % 24);
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", hours, minutes);
}
