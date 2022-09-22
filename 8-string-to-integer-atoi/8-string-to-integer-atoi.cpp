class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int result = 0;
        int size = s.size();
        int index = 0;
        
        while(index < size && s[index] == ' '){
            ++index;
        }
        if(index <  size && s[index] == '+')
        {
            sign = 1;
            ++index;
        }
        else if(index <  size && s[index] == '-')
        {
            sign = -1;
            ++index;
        }
        
        while(index <  size && isdigit(s[index])){
            int digit = s[index] - '0';
            if(result > INT_MAX/10 || (result == INT_MAX/10 && digit >  INT_MAX%10 )){
                return sign == 1 ? INT_MAX : INT_MIN;
            }
            
            result = result * 10 + digit;
            
            ++index;
        }
        return sign * result;
    }

              
            
              
             
        

                
              
        
    
};