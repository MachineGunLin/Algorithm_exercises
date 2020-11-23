#include<bits/stdc++.h>
using namespace std;

vector<int> nums;
vector<vector<int> > res;
vector<int> onePermutation;
vector<bool> visited;
int n;
set<vector<int> > hashTable;        //ШЅжи

void DFS(vector<int>& nums, int pos, int n, vector<bool>& visited, vector<int>& onePermutation, vector<vector<int> >& res) {
    if(pos == n) {
        hashTable.insert(onePermutation);
        return ;
    }
    for(int i = 0; i < n; ++i) {
        if(visited[i] == false) {
            onePermutation.push_back(nums[i]);
            visited[i] = true;
            DFS(nums, pos + 1, n, visited, onePermutation, res);
            visited[i] = false;
            onePermutation.pop_back();
        }
    }
}


void permutation(vector<int>& nums) {
    n = nums.size();
    onePermutation = vector<int>(0);
    visited = vector<bool>(n);
    DFS(nums, 0, n, visited, onePermutation, res);
}


int main() {
    int temp;
    while(cin >> temp, temp) {
        nums.push_back(temp);
    }
    permutation(nums);
    for(vector<int> permu : hashTable) {
        res.push_back(permu);
    }
    for(int i = 0; i < res.size(); ++i) {
        for(int j = 0; j < res[i].size(); ++j) {
            cout << res[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}

