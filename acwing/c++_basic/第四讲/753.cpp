#include<bits/stdc++.h>
using namespace std;

int main() {
    int N;
    vector<vector<int> > nums(100, vector<int>(100));
    while(cin >> N, N) {
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N; ++j) {
                nums[i][j] = min(min(i + 1, N - i), min(j + 1, N - j));     //������ÿ�����Ĵ�Сʵ���Ͼ��ǵ��߽����С����
            }
        }
        for(int i = 0; i < N; ++i) {
            for(int j = 0; j < N - 1; ++j) {
                cout << nums[i][j] << ' ';
            }
            cout << nums[i][N - 1] << endl;
        }
        cout << endl;
    }
}
