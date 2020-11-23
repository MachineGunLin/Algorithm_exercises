#include<bits/stdc++.h>
using namespace std;

int main() {
    char name[10];
    double baseSalary, sellAmount;
    scanf("%s", name);              //注意没有取地址运算符
    scanf("%lf%lf", &baseSalary, &sellAmount);
    printf("TOTAL = R$ %.2lf", baseSalary + 0.15 * sellAmount);
}
