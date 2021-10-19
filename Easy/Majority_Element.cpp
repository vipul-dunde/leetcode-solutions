class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        unordered_map<int, int> hashMap;
        
        if(nums.size()==1){
            return nums[0];
        }
        
        for(int i=0; i<nums.size(); i++)  {
            hashMap[nums[i]]++;
        }
        
        
        for(int i=0; i<nums.size(); i++)  {
            // cout<<nums[i]<<" "<<hashMap[nums[i]]<<"\n";
            if (hashMap[nums[i]]>(nums.size()/2)) {
                return nums[i];
            }
        }
        
        return 0;
    }
};