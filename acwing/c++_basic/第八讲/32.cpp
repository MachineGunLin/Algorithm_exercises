#include<bits/stdc++.h>
using namespace std;

vector<int> array;

static bool cmp(int x, int y) {
    if(x % 2 != y % 2) {
        return x % 2 > y % 2;
    }
    return x < y;
}

void reOrderArray(vector<int>& array) {
    sort(array.begin(), array.end(), cmp);
}

int main() {
    int temp;
    while(cin >> temp, temp) {  //输入以0结束，比如样例：1 2 3 4 5 0
        array.push_back(temp);
    }
    reOrderArray(array);
    for(int i = 0; i < array.size(); ++i) {
        cout << array[i] << ' ';
    }
}
