class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res;
        if(strs.empty()) return res;
        int strmin = INT_MAX;
        for(int i = 0; i < strs.size(); i++)
            if(strmin > strs[i].size())
                strmin = strs[i].size();
        int index = 0;
        while(index < strmin)
        {
            char temp = strs[0][index];
            for(int i = 1; i < strs.size(); i++)
                if(temp != strs[i][index])
                    return res;
            res += temp;
            ++index;
        }
        return res;
    }
};
