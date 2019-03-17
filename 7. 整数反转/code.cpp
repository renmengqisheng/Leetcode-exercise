class Solution {
public:
    int reverse(int x) {
        /******************
        *思路一
        long long t = x;
        int sgn = 1;
        if(t < 0)
        {
            sgn = -1;
            t = -t;
        }
        long long res = 0;
        while(t)
        {
            res = res * 10 + t % 10;
            t /= 10;
        }
        if(res > INT_MAX) return 0;
        return res * sgn;
        ******************/
        /******************
        *思路二
        ******************/
        long long res = 0;
        while(x) res = res * 10 + x % 10, x /= 10;
        if(res > INT_MAX || res < INT_MIN) return 0;
        return res;
    }
};
