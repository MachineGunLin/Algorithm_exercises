class Solution {
public:
    int strToInt(string str) {
        int k = 0;
        while(k < str.size() && str[k] == ' ') {
            ++k;
        }
        long long res = 0;
        int minus = 1;
        if(str[k] == '+') {
            ++k;
        } else if(str[k] == '-') {
            minus = -1;
            ++k;
        }
        while(k < str.size() && '0' <= str[k] && str[k] <= '9') {
            res = res * 10 + str[k] - '0';
            if(res > INT_MAX) {
                break;
            }
            ++k;
        }
        res = res * minus;
        if(res > INT_MAX) {
            res = INT_MAX;
        }
        if(res < INT_MIN) {
            res = INT_MIN;
        }
        return res;
    }
};
