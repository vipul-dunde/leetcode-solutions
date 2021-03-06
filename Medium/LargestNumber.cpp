class Solution {
public:
    static bool compare(int a, int b) {
        string x = to_string(a) + to_string(b);
        string y = to_string(b) + to_string(a);
        
        return x>y;
    }
    
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), compare);
        string ans = "";
        
        for (int i=0; i<nums.size(); i++)
        {
            ans+=to_string(nums[i]);
        }
        
        if(ans[0]=='0') {
            return "0";
        }
        return ans;
    }
};