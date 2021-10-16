class Solution {
public:
    int strStr(string haystack, string needle) {
        
        if (needle.size()==0) {
            return 0;
        }
        
        if (haystack.size()==0 || haystack.size()<needle.size()) {
            return -1;
        }
        
        for (int i=0; i<haystack.size()-needle.size()+1; i++) {
            if (needle[0]==haystack[i]) {
                int cnt = 0;
                for (int j=0; j<needle.size(); j++) {
                    if(needle[j]!=haystack[i+j])
                    {
                        break;
                    }
                    cnt++;
                }
                if(cnt==needle.size())
                {
                    return i;
                }
            }
        }
        return -1;
    }
};