class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.size();
        if(len == 0) return string();
        
        string str;
        for(int i = 0; i < 2*len+1; i++)
            str += i % 2 == 0?'#':s[i/2];
        
        int maxlen = 0;
        string temp;
        for(int i = 0; i < str.size(); i++)
        {
            int r = 0;
            while(i-r >= 0 && i+r < str.size() && str[i-r] == str[i+r]) ++r;
            --r;
            if(2*r+1 > maxlen)
            {
                maxlen = 2*r+1;
                temp = str.substr(i-r, maxlen);
            }
        }
        
        string res;
        for(int i = 0; i < temp.size()/2; i++)
            res += temp[2*i+1]; 
        return res;
    }
};
