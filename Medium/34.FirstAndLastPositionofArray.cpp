class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        
        vector<int> vect;
        vect.push_back(-1);
        vect.push_back(-1);
        
        int flag =0 ;
        for(int i=0; i<nums.size(); i++) {
            if(nums[i]>target){
                break;
            }
            
            if(flag!=1 && nums[i]==target){
                vect[0] = i;
                flag =1;
            }else{
                if(nums[i]==target){
                    vect[1] = i;
                }          
            }
        }
        
        if(vect[1]==-1 && vect[0]!=-1){
            vect[1] = vect[0];
        }
        
        return vect;
    }
};