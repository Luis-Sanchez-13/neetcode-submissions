class Solution {
public:
    bool isValid(string s) {
        if (s.size() % 2 == 1) return false;

        vector<char> stack;
        stack.reserve(s.size());

        for (char c : s) {
            char need;
            switch (c) {
                case ')': need = '('; break;
                case ']': need = '['; break;
                case '}': need = '{'; break;
                default:  stack.push_back(c); continue;
            }
            if (stack.empty() || stack.back() != need) return false;
            stack.pop_back();
        }
        return stack.empty();


        // vector<char> brackets;
        // unordered_map<char, char> bracket_map = {
        //     {'}','{'},
        //     {']','['},
        //     {')','('}
        // };

        // for (char p : s) {
        //     if (bracket_map.contains(p)) {
        //         if (brackets.empty() || brackets.back() != bracket_map[p]) {
        //             return false;
        //         } else {
        //             brackets.pop_back();
        //         }
                
        //     } else {
        //         brackets.push_back(p);
        //     }
        // }
        // if (!brackets.empty()){ 
        //     return false; 
        // }
        // return true;
    }
};


