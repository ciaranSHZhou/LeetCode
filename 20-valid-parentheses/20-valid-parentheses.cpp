class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> m{{')', '('}, {']', '['}, {'}', '{'}};
        
        for(char c : s){
            if (m.count(c) && !stack.empty()){
                if (stack.top() == m[c])
                    stack.pop();
                else
                    return false;
            }
            else
                stack.push(c);
        }
        return stack.empty() ? true : false;
    }
};