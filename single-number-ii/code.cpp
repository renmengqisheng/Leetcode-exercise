class Solution {
public:
    int singleNumber(int A[], int n) {
        if(n <= 0) return 0;
        int res = 0;
        for(int i = 0; i < sizeof(int)*8; i++)
        {
            int count = 0;
            for(int j = 0; j < n; j++)
                if(A[j] & (1 << i)) count++;
            res |= (count%3) << i;
        }
        return res;
    }
};
