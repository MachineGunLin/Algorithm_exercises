class Solution {
public:
    string replaceSpaces(string &str) {
        string res;
        for(auto s : str) {
            if(s == ' ') {
                res += "%20";
            } else {
                res += s;
            }
        }
        return res;
    }
};
