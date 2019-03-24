class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.empty()) return 0;
        int left = 0, right = height.size()-1;
        int res = 0;
        while(left != right)
        {
            if(height[left] > height[right])
            {
                res = max(res, height[right] * (right-left));
                --right;
            }
            else
            {
                res = max(res, height[left] * (right-left));
                ++left;
            }
        }
        return res;
    }
};
