class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> map;
        int cur = nums[0];
        int complement = target - cur;
        for (size_t i = 0; i < nums.size(); i++) {
            cur = nums[i];
            complement = target - cur;
            if (map.find(complement)!= map.end()) {
                ans.push_back(map.at(complement));
                ans.push_back(i);
            } else {
                map[cur] = i;
            }
        }
        return ans;
    }
};
