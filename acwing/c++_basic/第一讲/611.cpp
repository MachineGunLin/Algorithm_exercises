#include<bits/stdc++.h>
using namespace std;

int main() {
    int id1, num1, id2, num2;
    double value1, value2;
    scanf("%d%d%lf", &id1, &num1, &value1);
    scanf("%d%d%lf", &id2, &num2, &value2);
    printf("VALOR A PAGAR: R$ %.2lf\n", num1 * value1 + num2 * value2);
}
