class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> vect;
        
        unordered_map<int, int> hash;
        
        for (int i=0; i<nums.size(); i++) 
        {
            hash[nums[i]] = i;
        }
        
        for (int i=0; i<nums.size(); i++) {
            
             int a = target - nums[i];
            if(hash[a]>0 and hash[a]!=i) 
            {
                vect.push_back(i);
                vect.push_back(hash[a]);
                return vect;
            }
            
        }
        
        return vect;
        
    }
};