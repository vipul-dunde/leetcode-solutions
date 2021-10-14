class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        map<int, int> hashmap;
        
        for(int i=0; i<nums.size(); i++){
            hashmap[nums[i]]++;
            if(hashmap[nums[i]] == 2){
                return true;
            }
        }
        return false;
    }
};