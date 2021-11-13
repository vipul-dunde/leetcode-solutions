class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int sum = ((n+1)*n)/2;

        n = 0;
        for(int i=0; i<nums.size(); i++) {
            n  += nums[i];
        }

        return sum - n;
        }
};