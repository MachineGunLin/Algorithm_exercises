#include<bits/stdc++.h>
using namespace std;

int main() {
    double salary;
    scanf("%lf", &salary);
    double taxes;
    if(salary <= 2000.00) {
        printf("Isento");
        return 0;
    } else {
        if(salary <= 3000.00) {
            taxes = (salary - 2000.00) * 0.08;
        } else if(salary <= 4500.00) {
            taxes = 80 + (salary - 3000.00) * 0.18;
        } else {
            taxes = 350 + (salary - 4500) * 0.28;
        }
        printf("R$ %.2lf", taxes);
    }
}
