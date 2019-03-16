class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        /********************************
        *思路一
        int len = s.size();
        if(len < 2) return len;
        int res = INT_MIN;
        for(int i = 0; i < len; i++)
        {
            unordered_set<char> m;
            for(int j = i; j < len; j++)
            {
                if(m.count(s[j]))
                {
                    res = max(res, j-i);
                    break;
                }
                if(j == len-1)
                    res = max(res, len-i);
                m.insert(s[j]);
            }
        }
        return res;
        ********************************/
        /********************************
        *思路二
        ********************************/
        int len = s.size();
        if(len < 2) return len;
        int dup = -1;
        int res = INT_MIN;
        unordered_map<char, int> m;
        for(int i = 0; i < len; i++)
        {
            if(m.count(s[i])) dup = max(m[s[i]], dup);
            res = max(res, i-dup);
            m[s[i]] = i;
        }
        return res;
    }
};
