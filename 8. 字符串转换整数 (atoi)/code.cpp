class Solution {
public:
    int myAtoi(string str) {
        int len = str.size();
        if(len == 0) return 0;
        int i = 0;
        while(i < len && isspace(str[i])) ++i;
        if(i == len || (!isdigit(str[i]) && str[i] != '-' && str[i] != '+')) return 0;
        int sgn = 1;
        if(str[i] == '-') ++i, sgn = -1;
        else if(str[i] == '+') ++i;
        long long res = 0;
        while(isdigit(str[i]))
        {
            res = res * 10 + str[i++] - '0';
            if(res * sgn > INT_MAX) return INT_MAX;
            if(res * sgn < INT_MIN) return INT_MIN;
        }
        return res * sgn;
    }
};
