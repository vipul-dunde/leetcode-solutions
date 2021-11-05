class Solution {
public:
    void sortColors(vector<int>& nums) {
        
    map<int, int> hash;
    for(int i=0; i<nums.size(); i++)
    {
        hash[nums[i]]++;
    }
        nums.clear();
        for(int i=0; i<3; i++)
        {
            for(int j=0; j<hash[i]; j++){
                nums.push_back(i);
            }
        }
    }
};