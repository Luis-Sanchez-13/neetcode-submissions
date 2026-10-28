class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> maps;

        for (size_t i = 0; i < s.size(); i++) {
            
            maps[s.at(i)] += 1;
            
        }
        for (size_t i = 0; i < t.size(); i++) {
            
            maps[t.at(i)] -= 1;
            
        }
        
        for (size_t i = 0; i < s.size(); i++) {
            if ((s.size() != t.size()) || (maps[s.at(i)] != 0)) {
                return false;
            }
            
        }
        return true;
        
    }
};
