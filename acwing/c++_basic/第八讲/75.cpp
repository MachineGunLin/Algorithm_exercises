//方法一： 暴力枚举

class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); ++i) {
            for(int j = i + 1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target) {
                    return {nums[i], nums[j]};
                }
            }
        }
        return {};
    }
};


//方法二： 双指针

class Solution {
public:
    vector<int> findNumbersWithSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int i = 0, j = nums.size() - 1;
        while(i < j) {
            if(nums[i] + nums[j] == target) {
                return {nums[i], nums[j]};
            } else if(nums[i] + nums[j] > target) {
                --j;
            } else if(nums[i] + nums[j] < target) {
                ++i;
            }
        }
        return {};
    }
};
