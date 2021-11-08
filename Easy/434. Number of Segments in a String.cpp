class Solution {
public:
    int countSegments(string s) {
        if(s==""){
            return 0;
        }
        int cnt = 0, flag = 0;
        
        for(auto x: s)
        {
            if(x!=' '){
                flag = 1;
            }
            
            if(flag==1 && x==' '){
                cnt++;
                flag = 0;
            }
        }
        if(flag==1) {
            cnt++;
        }
        return cnt;
    }
};