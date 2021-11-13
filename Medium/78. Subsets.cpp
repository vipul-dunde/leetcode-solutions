class Solution {
public:
    void findSubset(vector<int>& nums, vector<vector<int>> &result, vector<int> &subset, int index) {
        result.push_back(subset);
        
        for(int i=index; i<nums.size(); i++) {
            subset.push_back(nums[i]);
            findSubset(nums, result, subset, i+1);
            subset.pop_back();
        }
        
        return;
    }
    
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> subset;
        
        int index = 0;
        findSubset(nums, result, subset, index);
        
        return result;
    }
};