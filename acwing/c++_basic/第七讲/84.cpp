class Solution {
public:
    int getSum(int n) {
        if(n == 1) {
            return 1;
        }
        return n + getSum(n - 1);
    }
};
