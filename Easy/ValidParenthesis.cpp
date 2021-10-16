#include <stack>
class Solution {
public:
    
    bool isValid(string s) {
        
        vector<char> checker;

        int top = 0;
        for (int i=0; i<s.length(); i++) {
            
            if ( s[i]=='(' || s[i]=='[' || s[i]=='{' ) 
            {
                checker.push_back(s[i]);
                // cout<<s[i];
            }

            if ( (s[i]==']' || s[i]=='}' || s[i]==')') && checker.size()==0) 
            {
                return false;
            }
            
            if(checker.size()==0) {
                top = 0;
            }else{
               top = checker.size()-1;
            }

            if (s[i]==')' && checker[top]=='(') {
                checker.pop_back();
            }
            
            if (s[i]=='}' && checker[top]=='{') {
                // cout<<top<<" ";
                checker.pop_back();
            }
            
            if (s[i]==']' && checker[top]=='[') {
                checker.pop_back();
            }

            if (s[i]==')' && checker[top]!='(') {
                return false;
            }
            
            if (s[i]=='}' && checker[top]!='{') {
                return false;
            }
            
            if (s[i]==']' && checker[top]!='[') {
                return false;
            }
            
        }
        
        if (checker.size()==0) {
            return true;
        }

        return false;
    }
    
};