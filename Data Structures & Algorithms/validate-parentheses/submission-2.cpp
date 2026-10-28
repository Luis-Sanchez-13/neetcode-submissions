class Solution {
public:
    bool isValid(string s) {
        vector<char> brackets;
        unordered_map<char, char> bracket_map = {
            {'}','{'},
            {']','['},
            {')','('}
        };

        for (char p : s) {
            if (bracket_map.contains(p)) {
                if (brackets.empty() || brackets.back() != bracket_map[p]) {
                    return false;
                } else {
                    brackets.pop_back();
                }
                
            } else {
                brackets.push_back(p);
            }
        }
        if (!brackets.empty()){ 
            return false; 
        }
        return true;
    }
};


