class Solution {
public:
    string trim(const string &str) {
        int i = 0;
        while (i < str.size() && str[i] == '0') i++;
        if (i == str.size()) return "0";
        return str.substr(i);
    }

    string removeKdigits(string num, int k) {
        if (num.size() <= k) return "0";
        string res;
        int left = 0;
        int right = k;
        while (right < num.size()) {
            int p = min_element(num.begin() + left, num.begin() + right + 1) - num.begin();
            left = p + 1;
            right++;
            res.append(1, num[p]);
        }
        return trim(res);
    }
};
