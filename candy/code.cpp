class Solution {
public:
    int candy(vector<int> &ratings) {
        int len = ratings.size();
        if(len < 2) return len;
        vector<int> dp(len, 1);
        if(ratings[0] > ratings[1]) dp[0] = 2;
        for(int i = 1; i < len; i++)
        {
            if(ratings[i] > ratings[i-1])
                dp[i] = dp[i-1]+1;
        }
        int res = dp[len-1];
        for(int i = len-2; i >= 0; i--)
        {
            if(ratings[i] > ratings[i+1] && dp[i] <= dp[i+1])
                dp[i] = dp[i+1]+1;
            res += dp[i];
        }
        return res;
    }
};
