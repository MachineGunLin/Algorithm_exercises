#include<bits/stdc++.h>
using namespace std;

int main() {
    double n1, n2, n3, n4, X, Y, Z;
    scanf("%lf%lf%lf%lf", &n1, &n2, &n3, &n4);
    X = (n1 * 2.0 + n2 * 3.0 + n3 * 4.0 + n4) / (10.0);
    printf("Media: %.1lf\n", X);
    if(X >= 7.0) {
        printf("Aluno aprovado.\n");
    } else if(X < 5.0) {
        printf("Aluno reprovado.\n");
    } else {
        printf("Aluno em exame.\n");
        scanf("%lf", &Y);
        printf("Nota do exame: %.1lf\n", Y);
        Z = (X + Y) / 2.0;
        if(Z >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1lf", Z);
    }
}
