class Solution {
public:
    
    int reverse(int y) {
        
        int rem = 0;
        long long int rev = 0;
        long long int x = 0;
        long long int one = -1;
        
        if (y>=0){
            x = y;
        }else{
            x = one*y;
        }
        
        while (x>0) {
            rem = x%10;
            x = x/10;
            rev = (rev*10) + (rem);
            if (rev>(INT_MAX) || rev<(INT_MIN)){
                return 0;
            }
        }
        
        
        if (y<0){
            return one*rev;
        }
        
        return rev;
    }
    
};