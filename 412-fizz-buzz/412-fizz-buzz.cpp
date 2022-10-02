class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> v;
        
        for (int i = 1; i <= n ; ++i){
            string s = i % 3 == 0 ? (i % 5 == 0 ? "FizzBuzz" : "Fizz") : (i % 5 == 0 ? "Buzz" : to_string(i));
            v.push_back(s);
        }
        return v;
    }
};