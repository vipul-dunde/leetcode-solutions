class Solution {
public:
    int singleNumber(vector<int>& nums) {
        
        unordered_map<int, int> hashMap;
        
        int val = 0;
        for (int i=0; i<nums.size(); i++) {
            hashMap[nums[i]]++;
        }
        for (int i=0; i<nums.size(); i++) {
            if(hashMap[nums[i]]==1){
                val = nums[i];
            }
        }
        
                    
        return val;
    }
};