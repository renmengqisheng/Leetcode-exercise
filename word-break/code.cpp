class Solution {
public:
    bool wordBreak(string s, unordered_set<string> &dict) {
        if(s.empty() || dict.empty()) return false;
        int len = s.size();
        vector<bool> vb(len+1, false);
        vb[0] = true;
        for(int i = 0; i <= len; i++)
            for(int j = 0; j < i; j++)
            {
                if(vb[j] && dict.count(s.substr(j, i-j)))
                {
                    vb[i] = true;
                    break;
                }
            }
        
        return vb[len];
    }
};
