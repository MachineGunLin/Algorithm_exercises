#include<bits/stdc++.h>
using namespace std;

vector<int> stores;
int n;

int main() {
    cin.tie(0);
    cout.tie(0);
    ios::sync_with_stdio(false);
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        stores.push_back(x);
    }
    sort(stores.begin(), stores.end());
    int address = stores[stores.size() / 2];
    int distance = 0;
    for(int i = 0; i < stores.size(); ++i) {
        distance += abs(stores[i] - address);
    }
    cout << distance << endl;
    return 0;
}
