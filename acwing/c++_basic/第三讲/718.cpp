#include<bits/stdc++.h>
using namespace std;

int main() {
    map<char, double> animals;
    int N;
    cin >> N;
    double num;
    char kind;
    while(N--) {
        cin >> num >> kind;
        if(kind == 'C') {
            animals['C'] += num;
        } else if(kind == 'R') {
            animals['R'] += num;
        } else {
            animals['F'] += num;
        }
    }
    cout << "Total: " << animals['R'] + animals['C'] + animals['F'] << " animals" << endl;
    cout << "Total coneys: " << animals['C'] << endl;
    cout << "Total rats: " << animals['R'] << endl;
    cout << "Total frogs: " << animals['F'] << endl;
    printf("Percentage of coneys: %.2lf %%\n", (animals['C'] / (animals['R'] + animals['C'] + animals['F']) * 100.0));
    printf("Percentage of rats: %.2lf %%\n", (animals['R'] / (animals['R'] + animals['C'] + animals['F']) * 100.0));
    printf("Percentage of frogs: %.2lf %%\n", (animals['F'] / (animals['R'] + animals['C'] + animals['F']) * 100.0));
}
