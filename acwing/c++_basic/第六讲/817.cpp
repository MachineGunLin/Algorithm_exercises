#include<bits/stdc++.h>
using namespace std;

set<int> hashTable;

int unique(int a[], int Size) {
    int res = 0;
    for(int i = 0; i < Size; ++i) {
        if(hashTable.count(a[i]) == 0) {
            ++res;
            hashTable.insert(a[i]);
        }
    }
    return res;
}

int main() {
    int n, Size, a[1001];
    cin >> n >> Size;
    for(int i = 0; i < Size; ++i) {
        cin >> a[i];
    }
    cout << unique(a, Size) + n - Size << endl;
}
