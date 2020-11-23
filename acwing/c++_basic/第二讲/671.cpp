#include<bits/stdc++.h>
using namespace std;

int main() {
    map<int, string> des;
    des[61] = "Brasilia";
    des[71] = "Salvador";
    des[11] = "Sao Paulo";
    des[21] = "Rio de Janeiro";
    des[32] = "Juiz de Fora";
    des[19] = "Campinas";
    des[27] = "Vitoria";
    des[31] = "Belo Horizonte";
    int city;
    cin >> city;
    if(des.count(city) != 0) {
        cout << des[city] << endl;
    } else {
        cout << "DDD nao cadastrado" << endl;
    }
}
