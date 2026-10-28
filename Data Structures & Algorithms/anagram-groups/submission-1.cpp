class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, int> maps;
        vector<vector<string>> strs_group;
        string word;


        for (size_t i = 0; i < strs.size(); i++) {
            string sorted_word = strs.at(i);

            std::sort(sorted_word.begin(), sorted_word.end());

            if (maps.count(sorted_word)) {
                    
                strs_group[maps[sorted_word]].push_back(strs.at(i));
            
            } else {
                maps[sorted_word] = strs_group.size();
                strs_group.push_back({strs.at(i)});
                
            }
            
           
        }

        return strs_group;
        

        
    }
};
