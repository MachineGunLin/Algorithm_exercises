#include<bits/stdc++.h>
using namespace std;

int main() {
        int num, time;
        double pay;
        scanf("%d%d%lf", &num, &time, &pay);
        printf("NUMBER = %d\n", num);
        printf("SALARY = U$ %.2lf", time * pay);
}
