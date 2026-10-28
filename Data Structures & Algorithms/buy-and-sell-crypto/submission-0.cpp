class Solution {
public:
    int maxProfit(vector<int>& p) {
        int min = p[0]; int maxProfit = 0;
        for (size_t i = 0; i < p.size(); i++) {            
            if (p[i] < min) {
                min = p[i];
            } else if (p[i] - min > maxProfit) {
                maxProfit = p[i] - min;
            }
        } 
        return maxProfit;  
    }
};