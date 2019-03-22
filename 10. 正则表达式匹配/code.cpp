class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.empty()) return s.empty();
        if(s.empty() && !p.empty())
        {
            if(p.size() == 1) return false;
            else if(p[0] != '*' && p[1] == '*')
                return isMatch(s, p.substr(2));
            else return false;
        }
        if(s[0] == p[0] || p[0] == '.')
        {
            if(p.size() == 1) return s.size() == 1;
            if(p.size() > 1 && p[1] != '*') return isMatch(s.substr(1), p.substr(1));
            else return isMatch(s.substr(1), p) || isMatch(s, p.substr(2));
        }
        else if(p.size() > 1 && p[1] == '*')
            return isMatch(s, p.substr(2));
        else return false;
    }
};
