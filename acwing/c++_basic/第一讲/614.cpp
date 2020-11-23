#include<bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    scanf("%d%d%d", &A, &B, &C);
    printf("%d eh o maior", max(A, max(B, C)));
}
