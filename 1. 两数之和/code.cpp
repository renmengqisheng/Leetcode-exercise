class Solution {
public:
    /*******************************************************
    *思路一
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        for(int i = 0; i < len; i++)
            for(int j = 0; j < len; j++)
                if(i != j && nums[i] + nums[j] == target)
                    return vector<int>{i ,j};
        return vector<int>();
    }
    *******************************************************/
    /*******************************************************
    *思路二
    *******************************************************/
    vector<int> twoSum(vector<int>& nums, int target) {
        int len = nums.size();
        unordered_map<int, int> m;
        for(int i = 0; i < len; i++)
        {
            if(m.count(target-nums[i]))
                return vector<int>{i, m[target-nums[i]]};
            m[nums[i]] = i;
        }
            
        return vector<int>();
    }
};
