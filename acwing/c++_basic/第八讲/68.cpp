class Solution {
public:
    int getMissingNumber(vector<int>& nums) {
        int index = 0;
        for(auto num : nums) {
            if(num != index) {
                return index;
            }
            ++index;
        }
        return nums.size();
    }
};
