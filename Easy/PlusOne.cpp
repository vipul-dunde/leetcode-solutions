class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int carry = 0;
        for ( int i = digits.size()-1; i>=0; i--) {
            
            digits[i] += 1;
            if(digits[i]>=10) {
                carry = 1;
                digits[i] -= 10;
            }else{
                carry = 0;
                return digits;
            }
            
        }
        
        if( carry==1 ) {
            vector<int> vect;
            vect.push_back(1);
            for (int i=0; i<digits.size(); i++) {
                vect.push_back(digits[i]);
            }
            
            return vect;
        }
        return digits;
    }
};