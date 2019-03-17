class Solution {
public:
    /****************************************
    *思路一
    string convert(string s, int numRows) {
        int len = s.size();
        if(numRows < 2 || len < 3) return s;
        
        vector<vector<char>> v(numRows);
        for(int i = 0; i < numRows; i++)
            v[i].resize((len+1)/2);
        
        int derection = 0;
        int row = 0, col = 0;
        for(int i = 0; i < len; i++)
        {
            v[row][col] = s[i];
            if(derection == 0)
            {
                
                if(row == numRows-1)
                    --row, ++col, derection = 1;
                else ++row;
            }
            else
            {
                if(row == 0)
                    ++row, derection = 0;
                else --row, ++col;
            }
        }
        
        string res;
        for(int i = 0; i < numRows; i++)
            for(int j = 0; j < (len+1)/2; j++)
            {
                if(v[i][j] != 0)
                    res += v[i][j];
            }
        
        return res;
    }
    ****************************************/
    /****************************************
    *思路二
    ****************************************/
    string convert(string s, int numRows) {
        int len = s.size();
        if(numRows < 2 || len < 3 || numRows >= len) return s;
        vector<string> v(numRows);
        bool derection = false;
        int row = 0;
        for(auto str:s)
        {
            v[row] += str;
            if(row == 0 || row == numRows-1) derection = !derection;
            row += derection? 1: -1;
        }
        string res;
        for(auto str:v) res += str;
        return res;
    }
}; 
