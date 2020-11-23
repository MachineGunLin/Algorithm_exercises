#include<bits/stdc++.h>
using namespace std;

int main() {
    double snack[5] = {4.00, 4.50, 5.00, 2.00, 1.50};
    int s, n;
    scanf("%d%d", &s, &n);
    printf("Total: R$ %.2lf", snack[s - 1] * n);
}
