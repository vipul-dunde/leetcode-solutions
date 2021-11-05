#include<math.h>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        int minlen = INT_MAX;
        string minstr ="";
        for (int i=0; i<strs.size(); i++){
            int len = strs[i].length();
            minlen = min(minlen, len);
            if(minlen==strs[i].size()){
                minstr = strs[i];
            }
        }
        string ret = "";
        for (int i=0; i<minlen; i++){       
            for(int j=0; j<strs.size()-1; j++) {
                if(strs[j][i]!=strs[j+1][i]) {
                    return ret;
                }
            }
            ret+=minstr[i];
        }
        
        return ret;
        
    }
};