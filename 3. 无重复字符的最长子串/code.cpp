class Solution {
public:
    int lengthOfLongestSubstring(string s) {
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
    }
};
