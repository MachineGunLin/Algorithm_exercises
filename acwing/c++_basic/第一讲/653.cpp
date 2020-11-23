#include<bits/stdc++.h>
using namespace std;
int num[7];
int s[7] = {100, 50, 20, 10, 5, 2, 1};

int main() {
    int money;
    scanf("%d", &money);
    int temp = money;
    while(money) {
        if(money >= 100) {
            num[0] += (money / 100);
            money %= 100;
        } else if(money >= 50) {
            num[1] += (money / 50);
            money %= 50;
        } else if(money >= 20) {
            num[2] += (money / 20);
            money %= 20;
        } else if(money >= 10) {
            num[3] += (money / 10);
            money %= 10;
        } else if(money >= 5) {
            num[4] += (money /5);
            money %= 5;
        } else if(money >= 2) {
            num[5] += (money / 2);
            money %= 2;
        } else {
            num[6] += money;
            money = 0;
        }
    }
    printf("%d\n", temp);
    for(int i = 0; i < 7; ++i) {
        printf("%d nota(s) de R$ %d,00\n", num[i], s[i]);
    }
}
