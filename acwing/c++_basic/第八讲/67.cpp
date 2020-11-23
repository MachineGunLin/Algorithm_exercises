class Solution {
unordered_map<int, int> hashTable;
public:
    int getNumberOfK(vector<int>& nums , int k) {
        for(auto num : nums) {
            ++hashTable[num];
        }
        return hashTable[k];
    }
};
