class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> sorted;
        
        int i=0, j=0;
        
        // sort(nums1.begin(), nums1.end());
        // sort(nums2.begin(), nums2.end());
        
        while(i!=(nums1.size()) && j!=(nums2.size())) {
            if(nums1[i]<nums2[j]) {
                sorted.push_back(nums1[i]);
                i++;
            }else{
                sorted.push_back(nums2[j]);
                j++;
            }
        }
        
        if(i!=nums1.size()) {
            for (int k = i; k<nums1.size(); k++){
                sorted.push_back(nums1[k]);
            }
        }else {
            for (int k = j; k<nums2.size(); k++){
                sorted.push_back(nums2[k]);
            }
        }
        
    
        if(sorted.size()%2==0){
            return ((double)(sorted[(sorted.size()/2)-1]+sorted[(sorted.size()/2)]))/2;
            
        }
            
        return (sorted[(sorted.size()/2)]);

    }
};