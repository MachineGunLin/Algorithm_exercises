class Solution {
public:
    vector<int> getLeastNumbers_Solution(vector<int> input, int k) {
        sort(input.begin(), input.end());
        vector<int> res;
        for(int i = 0; i < k; ++i) {
            res.push_back(input[i]);
        }
        return res;
    }
};
