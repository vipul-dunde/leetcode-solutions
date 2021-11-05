class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer;
        for(int i=1; i<n+1; i++) {
            
            if(i%3!=0 && i%5!=0)
            {
                answer.push_back(to_string(i));
            }else{
            if(i%3==0 && i%5==0) {
                answer.push_back("FizzBuzz");
            }else{
                if(i%3==0){
                    answer.push_back("Fizz");
                }else{
                    answer.push_back("Buzz");
                }
            }
        }

        }
        
        return answer;
    }
};