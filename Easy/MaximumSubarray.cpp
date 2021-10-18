class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum[nums.size()];
        
        int maxnum = nums[0];
        sum[0] = nums[0];
        
        for( int i=1; i<nums.size(); i++) {
            sum[i] = max(sum[i-1]+nums[i], nums[i]);
            maxnum = max(sum[i], maxnum);
        }
        
        return maxnum;
    }
};